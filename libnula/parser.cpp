#include "parser.h"
#include <sys/stat.h>



namespace nula {



Parser::Parser() :
	zone_(),
	scanner_(0)

{
	scanner_ = new Scanner(this);
}

Parser::~Parser()
{
	free(scanner_->yy_start);
	delete scanner_;
}


	
#ifndef S_ISREG 
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#endif

static FILE * seek_file_begin(Scanner *scanner_, const char *script_file, int& lineno, int& st_size)
{
	char c;
	FILE * fp;
	struct stat st;

	scanner_->set_lineno( 1 );

	if (!(fp = fopen(script_file, "rb"))) {
		return NULL;
	}

	if( fstat(fileno(fp), &st) < 0 || !S_ISREG(st.st_mode) ) {
		return NULL;
	}

	/* #!nula support */
	c = fgetc(fp);
	if (c == '#' && (c = fgetc(fp)) == '!') {
		while (c != '\n' && c != '\r' && c != EOF) {
			c = fgetc(fp);
			st_size++;
		}
		// calculate with \n
		st_size++;
		if (c == '\r') {
			if (fgetc(fp) != '\n') {
				long pos = ftell(fp);
				fseek(fp, pos - 1, SEEK_SET);
			}
			// calculate with \r
			st_size++;
		}

		st_size = st.st_size - st_size - 1;
		scanner_->set_lineno( 2 );
	} else {
		st_size = st.st_size;
		rewind(fp);
	}

	return fp;
}

int Parser::prepare_source_file( const char *source_file )
{
	FILE *fp;
	int st_size = 0, readed = 0;

	// if is not standard input port
	if( source_file ) {
		if((fp = seek_file_begin(scanner_, source_file, scanner_->lineno, st_size)) == NULL) {
			return FAILURE;
		}
	} else
		fp = stdin;

	scanner_->yy_cursor = scanner_->yy_start = (char *)calloc(st_size+((19 - st_size % 16)), sizeof(char));
	scanner_->yy_limit = scanner_->yy_start + st_size;

	if( !scanner_->yy_start || ((readed = fread(scanner_->yy_start, 1, st_size, fp)) != st_size))
	{
		fclose(fp);
		return FAILURE;
	}

	fclose(fp);
	return SUCCESS;
}

int Parser::prepare_source_buffer( const string& source )
{
	scanner_->yy_cursor = scanner_->yy_start = (char *)calloc(source.length()+((19 - source.length() % 16)), sizeof(char));
	scanner_->yy_limit = scanner_->yy_start + source.length();

	if( !scanner_->yy_start ) {
		return FAILURE;
	}

	memcpy(scanner_->yy_start, source.c_str(), source.length());

	return SUCCESS;
}

int Parser::ParseFromFile( const char *source_file )
{
	Parser parser;

	if( !parser.prepare_source_file( source_file ) ) {
		return FAILURE;
	}

	return parser.yyparse();
}


int Parser::ParseFromString( const string& source )
{
	Parser parser;

	if( !parser.prepare_source_buffer( source ) ) {
		return FAILURE;
	}
	
	return parser.yyparse();
}


void Parser::BeginNamespace( string *name_space )
{
}

void Parser::CreateClass( unsigned int modifier, string *class_id, string *parent )
{
}

void Parser::DoUse( string *class_name )
{
}


void Parser::yyerror(const char *msg)
{
	//script()->error(E_PARSE, 
}


Node::Node(Parser *parser, int type_) 
	: parser_(parser),
	type(type_)
{
	filename = parser->scanner()->get_file()->c_str();
	lineno = parser->scanner()->get_lineno();
}


Statement::Statement(Parser *parser, int type_) : Node(parser, type_) 
{
}


Expression::Expression(Parser *parser, int type_) : Node(parser, type_) 
{
}



Variable::Variable(Parser *parser, string *name_, Expression *expression_) : Node(parser, 0),
	name(name_),
	initial(expression_),
	index(-1),
	location(UNALLOCATED),
	scope_block(0)
{
}

Variable::Variable(Parser *parser, string *name_, Location location) : Node(parser, 0),
	name(name_),
	initial(NULL),
	index(-1),
	location(location),
	scope_block(0)
{
}



Identifier::Identifier(Parser *parser, string *s) : Expression(parser, EXPR_IDENTIFIER), id(s) 
{
}


Member::Member(Parser *parser ) :
	Expression(parser, EXPR_MEMBER),
	members(0)
{
	members = new List<Expression *>();
}


ArrayElement::ArrayElement(Parser *parser, Expression *element_) :
	Expression(parser, 0),
	element(element_)
{
}


	ArrayLiteral::ArrayLiteral(Parser *parser, List<ArrayElement *> *list_) : Expression(parser, EXPR_ARRAYLITERAL),
	list(list_) 
{
}


Call::Call(Parser *parser, Expression *callee_, List<Expression *> *arguments_) : Expression(parser, EXPR_CALL),
	callee(callee_),
	arguments(arguments_)
{
}


Binary::Binary(Parser *parser, int type, Expression *left_, Expression *right_ ) : Expression(parser, type),
	left(left_),
	right(right_)
{
	
}


Assign::Assign(Parser *parser, Expression *left_hside_, Expression *expression_) : Expression(parser, EXPR_ASSIGN),
	left_hside(left_hside_),
	expression(expression_)
{
}


Unary::Unary(Parser *parser, int type, Expression *expression_) : Expression(parser, type),
	expression(expression_)
{
}


Literal::Literal(Parser *parser, smi constant_) : Expression(parser, EXPR_LITERAL),
	constant(constant_)
{
}


Property::Property(Parser *parser, Expression *identifier_, Expression *expression_) : Expression(parser, EXPR_PROPVAL),
	identifier(identifier_),
	expression(expression_)
{
}


ObjectLiteral::ObjectLiteral(Parser *parser, List<Property *> *props) : Expression(parser, EXPR_OBJLITERAL),
	properties(props)
{
}

	
FunctionExpression::FunctionExpression(Parser *parser, int modifier_) : Expression(parser, EXPR_FUNCTION),
	parent(0),
	modifier(modifier_),
	scope(0),
	delegates(),
	parameter_list(new List<Identifier *>())
{
	if( parser->context() ) {
		parent = parser->context();
		parser->context()->delegates.append( this );
	}
}


New::New(Parser *parser, Expression *member_, List<Expression *> *arguments_) : Expression(parser, EXPR_NEW),
	member(member_),
	arguments(arguments_)
{
}

Conditional::Conditional(Parser *parser, Expression *condition_, Expression *true_expression_, Expression *false_expression_) :Expression(parser, EXPR_COND),
	condition(condition_),
	true_expression(true_expression_),
	false_expression(false_expression_)
{
}




ExpressionStatement::ExpressionStatement(Parser *parser, Expression *expression_) : Statement(parser, STAT_EXPR),
	expression(expression_)
{
}


BlockStatement::BlockStatement(Parser *parser, BlockStatement *parent_) : Statement(parser, STAT_BLOCK),
	parent(parent_),
	variables(),
	context(0),
	statements()
{
}

Variable *BlockStatement::NewVariable (string *name, Expression *expression_)
{
	Variable *variable;

	if((variable = variables.lookup<Variable *>(*name))) {
//		parser_->script()->error(E_ERROR, variable, "Variable '%s' already declared.", name->c_str());
		return NULL;
	}
	
	variable = new Variable(parser_, name, expression_);

	if( variable ) {
		variable->location =  Variable::Location::LOCAL;
		variable->index = variables.size();
		variable->scope_block = this;

		variables.add(*name, sizeof(Variable *), &variable);
		statements.append( new(zone()) Assign(this, variable, expression_) );
	}

	return variable;
}


WhileStatement::WhileStatement(Parser *parser, bool do_while_, Expression *expression_, Statement *statement_) : Statement(parser, STAT_WHILE),
	expression(expression_),
	statement(statement_)
{
}


IfStatement::IfStatement(Parser *parser, Expression*condition_,Statement *if_statement_, Statement *else_statement_) : Statement(parser, STAT_IF),
	condition(condition_),
	if_statement(if_statement_),
	else_statement(else_statement_)
{
}


WithStatement::WithStatement(Parser *parser, Expression *with_expression_, Statement *with_statement_) : Statement(parser, STAT_WITH),
	with_expression(with_expression_),
	with_statement(with_statement_)
{
}


LabelStatement::LabelStatement(Parser*parser, Expression *label_, Statement *statement_) : Statement(parser, STAT_LABEL),
	label(label_),
	statement(statement_)
{
}

CaseClausule::CaseClausule(Parser *parser, Expression *case_expression_, Statement *case_block_) : Node(parser, STAT_CASE),
	case_expression(case_expression_),
	case_block(case_block_)
{
}

CaseBlock::CaseBlock(Parser *parser, List<CaseClausule *> *case_before_, CaseClausule *default_block_, List<CaseClausule *> *case_after_) : Node(parser, 0),
	case_before(case_before_),
	default_block(default_block_),
	case_after(case_after_)
{
}

Switch::Switch(Parser *parser, Expression *condition_, CaseBlock *case_block_) : Statement(parser, STAT_SWITCH),
	condition(condition_),
	case_block(case_block_)
{
}

CatchBlock::CatchBlock(Parser *parser, Expression *catch_variable_, Statement *body_) : Statement(parser, 0),
	variable(catch_variable_),
	body(body_)
{
}

TryStatement::TryStatement(Parser *parser, Statement *try_block_, CatchBlock *catch_block_, Statement *finally_block_) : Statement(parser, STAT_TRY),
	try_block(try_block_),
	catch_block(catch_block_),
	finally_block(finally_block_)
{
}


ForStatement::ForStatement(Parser *parser, Expression *init_, Expression *condition_, Expression *update_, Statement *for_body_) : Statement(parser, STAT_FOR),
	initial(init_),
	condition(condition_),
	update(update_),
	for_body(for_body_)
{
}


ForInStatement::ForInStatement(Parser *parser, Expression *left_hand_side_, Expression *in_expression_, Statement *forin_body_) :Statement(parser, STAT_FORIN),
	left_hand_side(left_hand_side_),
	in_expression(in_expression_),
	forin_body(forin_body_)
{
}


BreakStatement::BreakStatement(Parser *parser, string *label_id_) : Statement(parser, STAT_BREAK),
	label(0)
{
	if( label_id_ ) {
		label = new(parser->zone()) Identifier(parser, label_id_);
	}
}


ContinueStatement::ContinueStatement(Parser *parser, string *label_id_) : Statement(parser, STAT_CONTINUE),
	label(0)

{
	if( label_id_ ) {
		label = new(parser->zone()) Identifier(parser, label_id_);
	}
}


ReturnStatement::ReturnStatement(Parser *parser, Expression *return_expression_) : Statement(parser, STAT_RETURN),
	expression(return_expression_)
{
}


ThrowStatement::ThrowStatement(Parser *parser, Expression *expression_) : Statement(parser, STAT_THROW),
	expression(expression_)
{
}

};
