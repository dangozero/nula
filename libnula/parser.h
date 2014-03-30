#ifndef _NULA_PARSER_H
#define _NULA_PARSER_H


#include "nula.h"
#include <list.h>
#include <hash_map>

namespace nula {


#define STAT_BLOCK		1
#define STAT_BREAK		2
#define STAT_CONTINUE	3
#define STAT_EMPTY		4
#define STAT_EXPR		5	
#define STAT_FOR		6
#define STAT_FORIN		7
#define STAT_IF			8
#define STAT_LABEL		9
#define STAT_RETURN		10
#define STAT_SWITCH		11
#define STAT_THROW		12
#define STAT_TRY		13
#define STAT_VAR		14
#define STAT_WHILE		15
#define STAT_WITH		16
#define STAT_CASE		17


enum ExpressionType {
	EXPR_COMMA,
	EXPR_BOOL_OR,
	EXPR_BOOL_AND,
	EXPR_BIT_OR,
	EXPR_BIT_XOR,
	EXPR_BIT_AND,
	EXPR_IN,
	EXPR_ADD,
	EXPR_SUB,
	EXPR_MUL,
	EXPR_DIV,
	EXPR_MOD,
	EXPR_DELETE,
	EXPR_VOID,
	EXPR_TYPEOF,
	EXPR_IS,
	EXPR_UNARY_MINUS,
	EXPR_UNARY_PLUS,
	EXPR_POSTINC,
	EXPR_POSTDEC,
	EXPR_PREINC,
	EXPR_PREDEC,
	EXPR_EQ,
	EXPR_EQEQ,
	EXPR_NOTEQ,
	EXPR_NOTEQEQ,
	EXPR_LT,
	EXPR_LE,
	EXPR_GT,
	EXPR_GE,
	EXPR_BITNEG,
	EXPR_LOGNEG,
	EXPR_LSH,
	EXPR_RSH,
	EXPR_ASSIGN,
	EXPR_COND,
	EXPR_ARRAY,
	EXPR_MEMBER,
	EXPR_NEW,
	EXPR_CALL,
	EXPR_THIS,
	EXPR_FUNCTION,
	EXPR_IDENTIFIER,
	EXPR_ARRAYLITERAL,
	EXPR_PROPVAL,
	EXPR_LITERAL,
	EXPR_OBJLITERAL,
};

class Parser;


struct Node;
struct Statement;
struct Expression;

struct Variable;

struct Identifier;
struct Member;
struct ArrayElement;
struct ArrayLiteral;
struct Call;
struct Binary;
struct Assign;
struct Unary;
struct Literal;
struct Property;
struct ObjectLiteral;
struct FunctionExpression;
struct New;
struct Conditional;

struct ExpressionStatement;
struct BlockStatement;
struct WhileStatement;
struct IfStatement;
struct WithStatement;
struct LabelStatement;
struct Switch;
struct TryStatement;
struct ForStatement;
struct ForInStatement;
struct BreakStatement;
struct ContinueStatement;
struct ReturnStatement;
struct ThrowStatement;

#define DECL_EMPTY_NODE_TYPE( Type ) always_inline virtual Type *as##Type##() { return NULL; }

#define DECL_NODE_TYPE( Type ) always_inline virtual Type *as##Type##() { return this; }

struct Node: public Zone {
	DECL_EMPTY_NODE_TYPE( Expression );
	DECL_EMPTY_NODE_TYPE( Statement );

	Node(Parser *parser, int type);

	int type;
	Parser *parser_;
	const char  *filename;
	int lineno;
};

struct Statement: public Node {
	DECL_NODE_TYPE(Statement);

	DECL_EMPTY_NODE_TYPE( BlockStatement );
	DECL_EMPTY_NODE_TYPE( ExpressionStatement );
	DECL_EMPTY_NODE_TYPE( WhileStatement );
	DECL_EMPTY_NODE_TYPE( IfStatement );
	DECL_EMPTY_NODE_TYPE( WithStatement );
	DECL_EMPTY_NODE_TYPE( LabelStatement );
	DECL_EMPTY_NODE_TYPE( Switch );
	DECL_EMPTY_NODE_TYPE( TryStatement );
	DECL_EMPTY_NODE_TYPE( ForStatement );
	DECL_EMPTY_NODE_TYPE( ForInStatement );
	DECL_EMPTY_NODE_TYPE( BreakStatement );
	DECL_EMPTY_NODE_TYPE( ContinueStatement );
	DECL_EMPTY_NODE_TYPE( ReturnStatement );
	DECL_EMPTY_NODE_TYPE( ThrowStatement );

	Statement(Parser *parser, int type_);
};


struct Expression: public Node {
	DECL_EMPTY_NODE_TYPE(Identifier);
	DECL_EMPTY_NODE_TYPE(Member);
	DECL_EMPTY_NODE_TYPE(ArrayElement);
	DECL_EMPTY_NODE_TYPE(ArrayLiteral);
	DECL_EMPTY_NODE_TYPE(Call);
	DECL_EMPTY_NODE_TYPE(Binary);
	DECL_EMPTY_NODE_TYPE(Assign);
	DECL_EMPTY_NODE_TYPE(Unary);
	DECL_EMPTY_NODE_TYPE(Literal);
	DECL_EMPTY_NODE_TYPE(Property);
	DECL_EMPTY_NODE_TYPE(ObjectLiteral);
	DECL_EMPTY_NODE_TYPE(FunctionExpression);
	DECL_EMPTY_NODE_TYPE(New);

	DECL_NODE_TYPE(Expression);

	Expression(Parser *parser, int type_);
};

struct Variable: public Node {
	DECL_NODE_TYPE(Variable);

	enum Location {
		UNALLOCATED,
		PARAMETER,
		CONTEXT,
		LOCAL,
	};

	Variable(Parser *parser, string *name_, Expression *expression_);
	Variable(Parser *parser, string *name_, Location location);

	string *name;
	Expression *initial;
	Location location;
	int index;
	BlockStatement *scope_block;
};

struct Binary: public Expression {
	DECL_NODE_TYPE(Binary);

	Binary(Parser *parser, int type, Expression *left_, Expression *right_);


	Expression *left;
	Expression *right;
};

struct Assign: public Expression {
	DECL_NODE_TYPE(Assign);

	Assign(Parser *parser, Expression *left_hside_, Expression *expression_);

	Expression *left_hside;
	Expression *expression;
};

struct Identifier: public Expression {
	DECL_NODE_TYPE(Identifier);

	Identifier(Parser *parser, string *s);
	string *id;
};

struct Member: public Expression {
	DECL_NODE_TYPE(Member);

	Member(Parser *parser);
	
	always_inline void append(Expression *member) {
		members->append( member );
	}

	List<Expression *> *members;
};

struct ArrayElement: public Expression {
	DECL_NODE_TYPE(ArrayElement);

	ArrayElement(Parser *parser, Expression *element_);

	Expression *element;
};

struct ArrayLiteral: public Expression {
	DECL_NODE_TYPE(ArrayLiteral);

	ArrayLiteral(Parser *parser, List<ArrayElement *> *list_);

	List<ArrayElement *> *list;
};

struct Call: public Expression {
	DECL_NODE_TYPE(Call);

	Call(Parser *parser, Expression *callee_, List<Expression *> *arguments_);

	Expression *callee;
	List<Expression *> *arguments;
};

struct Unary: public Expression {
	DECL_NODE_TYPE(Unary);

	Unary(Parser *parser, int type, Expression *expression_);

	Expression *expression;
};

struct Literal: public Expression {
	DECL_NODE_TYPE(Literal);

	Literal(Parser *parser, word constant_);

	word constant;
};

struct Property: public Expression {
	DECL_NODE_TYPE(Property);

	Property(Parser *parser, Expression *identifier_, Expression *expression_);

	Expression *identifier;
	Expression *expression;
};

struct ObjectLiteral: public Expression {
	DECL_NODE_TYPE(ObjectLiteral);

	ObjectLiteral(Parser *parser, List<Property *> *props);

	List<Property *> *properties;
};

struct FunctionExpression: public Expression {
	DECL_NODE_TYPE(FunctionExpression);

	FunctionExpression(Parser *parser, int modifier_ );
	
	unsigned int modifier;
	FunctionExpression *parent;
	BlockStatement *scope;
	List<FunctionExpression *> delegates;
	List<Identifier *> *parameter_list;
};

struct BlockStatement: public Statement {
	DECL_NODE_TYPE(BlockStatement);

	BlockStatement(Parser *parser, BlockStatement *parent_);

	Variable *NewVariable (string *name, Expression *expression_);

	BlockStatement *parent;
	List<Statement *> statements;
	FunctionExpression *context;
	Hash variables;
};

struct ExpressionStatement: public Statement {
	DECL_NODE_TYPE(ExpressionStatement);

	ExpressionStatement(Parser *parser, Expression *expression_);

	Expression *expression;
};

struct New: public Expression {
	DECL_NODE_TYPE(New);

	New(Parser *parser, Expression *member_, List<Expression *> *arguments_);

	Expression *member;
	List<Expression *> *arguments;
};

struct Conditional: public Expression {
	DECL_NODE_TYPE(Conditional);

	Conditional(Parser *parser, Expression *condition_, Expression *true_expression_, Expression *false_expression_);
	
	Expression *condition;
	Expression *true_expression;
	Expression *false_expression;
};



struct WhileStatement: public Statement {
	DECL_NODE_TYPE(WhileStatement);

	WhileStatement(Parser *parser, bool do_while_, Expression *expression_, Statement *statement_);
	
	bool do_while;
	Expression *expression;
	Statement *statement;
};

struct IfStatement: public Statement {
	DECL_NODE_TYPE(IfStatement);

	IfStatement(Parser *parser, Expression *condition_, Statement *if_statement_, Statement *else_statement_);

	Expression *condition;
	Statement *if_statement;
	Statement *else_statement;
};

struct WithStatement: public Statement {
	DECL_NODE_TYPE(WithStatement);

	WithStatement(Parser *parser, Expression *with_expression_, Statement *with_statement_);

	Expression *with_expression;
	Statement *with_statement;
};

struct LabelStatement: public Statement {
	DECL_NODE_TYPE(LabelStatement);

	LabelStatement(Parser*parser, Expression *label_, Statement *statement_);

	Expression *label;
	Statement *statement;
};

struct CaseClausule: public Node {
	CaseClausule(Parser *parser, Expression *case_expression_, Statement *case_block_);

	Expression *case_expression;
	Statement *case_block;
};


struct CaseBlock: public Node {
	CaseBlock(Parser *parser, List<CaseClausule *> *case_before_, CaseClausule *default_block_, List<CaseClausule *> *case_after_);

	List<CaseClausule *> *case_before;
	CaseClausule *default_block;
	List<CaseClausule *> *case_after;
};


struct Switch: public Statement {
	DECL_NODE_TYPE(Switch);

	Switch(Parser *parser, Expression *condition_, CaseBlock *case_block_);

	Expression *condition;
	CaseBlock *case_block;
};

struct CatchBlock: public Statement {
	DECL_NODE_TYPE(CatchBlock);

	CatchBlock(Parser *parser, Expression *catch_variable_, Statement *body_);

	Expression *variable;
	Statement *body;
};

struct TryStatement: public Statement {
	DECL_NODE_TYPE(TryStatement);

	TryStatement(Parser *parser, Statement *try_block_, CatchBlock *catch_block_, Statement *finally_block_);

	Statement *try_block;
	CatchBlock *catch_block;
	Statement *finally_block;
};

struct ForStatement: public Statement {
	DECL_NODE_TYPE(ForStatement);

	ForStatement(Parser *parser, Expression *init_, Expression *condition_, Expression *update_, Statement *for_body_);

	Expression *initial;
	Expression *condition;
	Expression *update;
	Statement *for_body;
};

struct ForInStatement: public Statement {
	DECL_NODE_TYPE(ForInStatement);

	ForInStatement(Parser *parser, Expression *left_hand_side_, Expression *in_expression_, Statement *forin_body_);

	Expression *left_hand_side;
	Expression *in_expression;
	Statement *forin_body;
};

struct BreakStatement: public Statement {
	DECL_NODE_TYPE(BreakStatement);

	BreakStatement(Parser *parser, string *label_id_);

	Identifier *label;
};

struct ContinueStatement: public Statement {
	DECL_NODE_TYPE(ContinueStatement);
	
	ContinueStatement(Parser *parser, string *label_id_);

	Identifier *label;
};

struct ReturnStatement: public Statement {
	DECL_NODE_TYPE(ReturnStatement);

	ReturnStatement(Parser *parser, Expression *return_expression_);

	Expression *expression;
};

struct ThrowStatement: public Statement {
	DECL_NODE_TYPE(ThrowStatement);

	ThrowStatement(Parser *parser, Expression *expression_);

	Expression *expression;
};

#include "parser-inl.h"


struct Declarator {
	i::Type *type;
	string *name;
};


struct MethodDeclarator {
	string *name;
	List<Declarator> *parameters;
};



#define YYSTYPE_IS_DECLARED
union YYSTYPE {
	List<Declarator> decls;
	MethodDeclarator declarator;
	Expression *expression;
	Statement *statement;
	List<Expression *> *arguments_list;
};



struct Scanner: public Zone {
	friend class Parser;
private:
	int yy_leng;
	char *yy_start;
	char *yy_text;
	char *yy_cursor;
	char *yy_marker;
	char *yy_limit;
	int yy_state;
	int yy_pos;

	int lineno;
	string *filename;

	Parser *parser_;

	Scanner(Parser *parser)
		: yy_leng(0), yy_start(0), yy_text(0),
		yy_cursor(0), yy_marker(0), yy_limit(0),
		yy_state(0), yy_pos(0), lineno(1), filename(0),
		parser_(parser)
	{
	}

	Scanner()
		: yy_leng(0), yy_start(0), yy_text(0),
		yy_cursor(0), yy_marker(0), yy_limit(0),
		yy_state(0), yy_pos(0), lineno(1), filename(0)
	{
	}

	~Scanner()
	{
		free(yy_start);
	}

public:
	always_inline void set_file(const char *source_file);

	always_inline string *get_file() const;

	always_inline void set_lineno(int line_);

	always_inline int get_lineno() const;
};

class Parser: public Zone {
public:
	Parser();
	~Parser();


public:
	static int ParseFromFile( const char *source_file );
	static int ParseFromString( const string& source );

	always_inline LocalHeap& zone();
	always_inline Scanner *scanner();

	always_inline FunctionExpression *context() const {
		return current_decl;
	}
	
	always_inline i::Type *classp() const {
		return current_class;
	}

private:
	int yyparse();
	int yylex(YYSTYPE *);
	

	int prepare_source_file( const char *source_file );
	int prepare_source_buffer( const string& source );


	void yyerror(const char *msg);

	void BeginNamespace( string *name_space );
	void CreateClass( unsigned int modifier, string *class_id, string *parent );
	void DoUse( string *class_name );

private:
	LocalHeap zone_;
	Scanner *scanner_;

	FunctionExpression *current_decl;

	Hash use_table;

	unsigned int modifier_;
	string *name_space;

	i::Type *current_class;

	int current_osb;
};



// Zone of parser heap
LocalHeap& Parser::zone() {
	return zone_;
}


//
Scanner * Parser::scanner() {
	return scanner_;
}


void Scanner::set_file(const char *source_file) {
	filename = new(parser_->zone()) string(source_file);
}

string *Scanner::get_file() const {
	return filename;
}

void Scanner::set_lineno(int line_) {
	lineno = line_;
}

int Scanner::get_lineno() const {
	return lineno;
}

};


#endif
