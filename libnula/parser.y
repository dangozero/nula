%{

#include "nula.h"
#include "parser.h"


#define INT_TYPE		Int::class$
#define FLOAT_TYPE		Float::class$
#define BOOLEAN_TYPE	Bool::class$
#define OBJECT_TYPE		Object::class$
#define STRING_TYPE		String::class$


namespace nula {

%}

%union {
	int modifier;
	i::Type *type;
	List<Declarator> *decls;
	Declarator decl;
	MethodDeclarator meth_decl;
	Expression *expression;
	Statement *statement;
	List<string *> *strings;
	List<Expression *> *arguments_list;
}

%pure-parser
%start program


%token   PLUS_TK         MINUS_TK        MULT_TK         DIV_TK    REM_TK
%token   LS_TK           RS_TK
%token   AND_TK          XOR_TK          OR_TK
%token   BOOL_AND_TK BOOL_OR_TK 
%token   EQ_TK NEQ_TK GT_TK GTE_TK LT_TK LTE_TK

%token   PLUS_ASSIGN_TK  MINUS_ASSIGN_TK MULT_ASSIGN_TK DIV_ASSIGN_TK
%token   REM_ASSIGN_TK   
%token   LS_ASSIGN_TK    SRS_ASSIGN_TK   ZRS_ASSIGN_TK
%token   AND_ASSIGN_TK   XOR_ASSIGN_TK   OR_ASSIGN_TK


%token   PUBLIC_TK       PRIVATE_TK         PROTECTED_TK
%token   STATIC_TK       FINAL_TK           SYNC_TK
%token   VOLATILE_TK     NATIVE_TK
%token   ABSTRACT_TK

%token   DECR_TK INCR_TK

%token   DEFAULT_TK      IF_TK              THROW_TK
%token   BOOLEAN_TK      DO_TK              IMPLEMENTS_TK
%token   THROWS_TK       BREAK_TK           USE_TK       
%token   ELSE_TK         INSTANCEOF_TK      RETURN_TK
%token   VOID_TK         CATCH_TK           INTERFACE_TK
%token   CASE_TK         EXTENDS_TK         FINALLY_TK
%token   PARENT_TK        WHILE_TK           CLASS_TK
%token   SWITCH_TK       CONST_TK           TRY_TK
%token   FOR_TK          NEW_TK             CONTINUE_TK
%token   GOTO_TK         NAMESPACE_TK         THIS_TK

%token   INTEGRAL_TK

%token   FP_TK	OBJECT_TK STRING_TK

%token   ID_TK

%token   REL_QM_TK         NOT_TK  NEG_TK

%token   ASSIGN_ANY_TK   ASSIGN_TK

%token   STRING_LIT_TK   INT_LIT_TK         FP_LIT_TK
%token   TRUE_TK         FALSE_TK           BOOL_LIT_TK       NULL_TK


%type <type> type primitive_type reference_type INTEGRAL_TK FP_TK BOOLEAN_TK 
			 array_type
			 
%type <identifier> class_or_interface_type name identifier qualified_name
					class_type interface_type ID_TK super variable_declarator_id
					simple_name
					
%type <strings> interface_type_list interfaces

%type <literal> INT_LIT_TK FP_LIT_TK BOOL_LIT_TK STRING_LIT_TK NULL_TK
%type <expression> literal

%type <modifier> modifier modifiers PUBLIC_TK PRIVATE_TK FINAL_TK ABSTRACT_TK STATIC_TK PROTECTED_TK
				 ASSIGN_ANY_TK ASSIGN_TK

%type <meth_decl> constructor_declarator method_declarator 
%type <decls> formal_parameter_list
%type <decl> formal_parameter
%type <statement> method_body block constructor_body

%type <expression> variable_declarator variable_declarators expression array_initializer
					method_header

					

%type <modifier> final assignment_operator
%type <statement> constructor_block_end  block_statements block_begin block_end
				  block_statement local_variable_declaration_statement local_variable_declaration
				  statement statement_without_trailing_substatement
				  labeled_statement if_then_statement if_then_else_statement while_statement
				  for_statement labeled_statement_nsi if_then_else_statement_nsi while_statement_nsi
				  for_statement_nsi statement_nsi try_statement throw_statement synchronized_statement
				  return_statement continue_statement break_statement do_statement switch_statement
				  expression_statement empty_statement  finally
%type <expression> this_or_parent explicit_constructor_invocation variable_initializers
					variable_initializer assignment pre_increment_expression constructor_header
					pre_decrement_expression post_increment_expression post_decrement_expression
					method_invocation class_instance_creation_expression statement_expression
					primary_no_new_array array_creation_expression field_access array_access
					type_literals  anonymous_class_creation dim_exprs dim_expr postfix_expression
					unary_expression unary_expression_not_plus_minus cast_expression additive_expression
					multiplicative_expression shift_expression relational_expression equality_expression
					and_expression exclusive_or_expression inclusive_or_expression conditional_and_expression
					conditional_or_expression  conditional_expression left_hand_side constant_expression
					primary assignment_expression
%type <argument_list> argument_list


%%


literal:
	INT_LIT_TK { $$ = new(zone()) Literal(this, EXPR_INT_LITERAL, $1); }
	| FP_LIT_TK { $$ = new(zone()) Literal(this, EXPR_FLOAT_LITERAL, $1); }
	| BOOL_LIT_TK { $$ = new(zone()) Literal(this, EXPR_BOOL_LITERAL, $1); }
	| STRING_LIT_TK { $$ = new(zone()) Literal(this, EXPR_STRING_LITERAL, $1); }
	| NULL_TK { $$ = new(zone()) Literal(this, EXPR_NULL_LITERAL, 0); }
;

type:
	primitive_type
	| reference_type
;

primitive_type:
	INTEGRAL_TK { $$ = INTEGER_TYPE; }
	| FP_TK { $$ = FLOAT_TYPE; }
	| BOOLEAN_TK { $$ = BOOLEAN_TYPE; }
	| OBJECT_TK { $$ = OBJECT_TYPE; }
	| STRING_TK { $$ = STRING_TYPE; }
;

reference_type:
	class_or_interface_type {
		$$ = LoadType( $1 );
	}
	| array_type
;

class_or_interface_type:
	name
;

class_type:
	class_or_interface_type	/* Default rule */
;

interface_type:
	 class_or_interface_type
;

array_type:
	primitive_type dims {
		i::Type *prim = $1;
		string type_name(prim->name());
		
		while(current_osb-- > 0)
		{
			type_name = type_name+"[]";
		}
		// TODO: Register array type here.
	}
	| name dims {
		i::Type *type = LoadType( $1 );
		string type_name(type->name());
		
		while(current_osb-- > 0) {
			type_name = type_name+"[]";
		}
		
		// TODO: Register array type
		// type = new i::Type(type, type_name);
	}
;

name:
	simple_name		/* Default rule */
	| qualified_name		/* Default rule */
;

simple_name:
	identifier		/* Default rule */
;

qualified_name:
	name '.' identifier {
		$1->append(1, '.').append(*$3);
	}
;

identifier:
	ID_TK
;

program:
	| package_declaration
	| import_declarations
	| type_declarations
	| package_declaration import_declarations
	| package_declaration type_declarations
	| import_declarations type_declarations
	| package_declaration import_declarations type_declarations
;

import_declarations:
	import_declaration
	| import_declarations import_declaration
;

type_declarations:
	type_declaration
	| type_declarations type_declaration
;

package_declaration:
	NAMESPACE_TK name ';' {
		BeginNamespace( $2 );
	}
;

import_declaration:
	single_type_import_declaration
;

single_type_import_declaration:
	USE_TK name ';' {
		DoUse( $2 );
	}
;

type_declaration:
	class_declaration {
		EndClassDeclaration();
	}
	| empty_statement
;

modifiers:
	modifier {
		modifier_ = $1;
	}
	| modifiers modifier {
		modifier_ |= $2;
	}
;


modifier:
	PUBLIC_TK { $$ = ACC_PUBLIC; }
	| PRIVATE_TK { $$ = ACC_PRIVATE; }
	| FINAL_TK { $$ = ACC_FINAL; }
	| ABSTRACT_TK { $$ = ACC_ABSTRACT; }
	| STATIC_TK { $$ = ACC_STATIC; }
	| PROTECTED_TK { $$ = ACC_PROTECTED; }
;

class_declaration:
	modifiers CLASS_TK identifier super interfaces { 
		CreateClass( $1, $3, $4, $5 );
	} class_body
	| CLASS_TK identifier super interfaces  {
		CreateClass( ACC_PUBLIC, $2, $3, $4 );
	} class_body
;

super:
	/*empty*/ { $$ = NULL; }
	| EXTENDS_TK class_type { 
		$$ = $2; 
	}
;

interfaces:
	| IMPLEMENTS_TK interface_type_list {
		$$ = $2;
	}
;

interface_type_list:
	interface_type {
		$$ = new List<string *>();
		$$->append( $1 );
	}
	| interface_type_list ',' interface_type {
		$$->append( $3 );
	}
;

class_body:
	'{' '}'
	| '{' class_body_declarations '}'
;

class_body_declarations:
	class_body_declaration
	| class_body_declarations class_body_declaration
;

class_body_declaration:
	class_member_declaration
	| constructor_declaration
	| block
;

class_member_declaration:
	field_declaration
	| method_declaration
	| class_declaration	 {
		EndClassDeclaration();
	}
	| empty_statement
;

/* 19.8.2 Productions from 8.3: Field Declarations  */
field_declaration:
	type variable_declarators ';' {
		DeclareFields( ACC_PUBLIC, $1, $2 );
	}
	| modifiers type variable_declarators ';' {
		DeclareFields( $1, $2, $3 );
	}
;

variable_declarators:
	variable_declarator	{
		$$ = new(zone()) List<Expression *>();
		$$->append( $1 );
	}
	| variable_declarators ',' variable_declarator {
		$$->append( $3 );
	}
;


variable_declarator:
	variable_declarator_id {
		$$ = new(zone()) Identifier(this, $1);
	}
	| variable_declarator_id ASSIGN_TK variable_initializer {
		$$ = new(zone()) Assign(this, new(zone()) Identifier(this, $1), $3);
	}
;

variable_declarator_id:
	identifier
;

variable_initializer:
	expression
	| array_initializer
;


/* 19.8.3 Productions from 8.4: Method Declarations  */
method_declaration:
	method_header method_body { 
		EndMethodDeclaration( $2 );
	}
;

method_header:	
	type method_declarator {
		$$ = new(zone()) MethodDeclaration(this, ACC_PUBLIC, $1, $2.name, $2.parameters);
	}
	| VOID_TK method_declarator {
		$$ = new(zone()) MethodDeclaration(this, ACC_PUBLIC, VOID_TYPE, $2.name, $2.parameters);
	}
	| modifiers type method_declarator {
		$$ = new(zone()) MethodDeclaration(this, $1, $2, $3.name, $3.parameters);
	}
	| modifiers VOID_TK method_declarator { 
		$$ = new(zone()) MethodDeclaration(this, $1, VOID_TYPE, $3.name, $3.parameters);
	}
;

method_declarator:
	identifier '(' ')' {
		$$.name = $1;
		$$.parameters = NULL;
	}
	| identifier '(' formal_parameter_list ')' {
		$$.name = $1;
		$$.parameters = $3;
	}
;

formal_parameter_list:
	formal_parameter {
		$$ = new(zone()) List<Declarator>();
		$$->append( $1 );
	}
	| formal_parameter_list ',' formal_parameter {
		$$->append( $3 );
	}
;

formal_parameter:
	type variable_declarator_id {
		$$.type = $1;
		$$.name = $2;
	}
;

method_body:
	block
	| ';' {
		$$ = NULL;
	}
;

constructor_declaration:
	constructor_header constructor_body {
	}
;

constructor_header:
	constructor_declarator {
		$$ = new(zone()) MethodDeclaration(this, ACC_PUBLIC, VOID_TYPE, $1, NULL);
	}
	| modifiers constructor_declarator {
		$$ = new(zone()) MethodDeclaration(this, $1, VOID_TYPE, $1, $2);
	}
;

constructor_declarator:
	simple_name '(' ')' {
		$$.name = $1;
		$$.parameters = NULL;
	}
	| simple_name '(' formal_parameter_list ')' {
		$$.name = $1;
		$$.parameters = $3;
	}
;

constructor_body:
	block_begin constructor_block_end {
		$$ = $2;
	}
	| block_begin explicit_constructor_invocation constructor_block_end {
		$$ = $3;
	}
	| block_begin block_statements constructor_block_end {
		$$ = $3;
	}
	| block_begin explicit_constructor_invocation block_statements constructor_block_end { 
		$$ = $4; 
	}
;


constructor_block_end:
	block_end
;

explicit_constructor_invocation:
	this_or_parent '(' ')' ';' {
		$$ = new(zone()) Call(this, $1, NULL);
	}
	| this_or_parent '(' argument_list ')' ';' {
		$$ = new(zone()) Call(this, $1, NULL);
	}
;

this_or_parent:
	THIS_TK {
		$$ = new(zone()) Unary(this, EXPR_THIS);
	}
	| PARENT_TK {
		$$ = new(zone()) Unary(this, EXPR_PARENT);
	}
;

array_initializer:
	'{' '}' {
	}
	| '{' variable_initializers '}' {
	
	}
	| '{' variable_initializers ',' '}' {
	
	}
;


variable_initializers:
	variable_initializer {
	
	}
	| variable_initializers ',' variable_initializer {
	
	}
;

block:
	'{' '}' {
		$$ = NULL;
	}
	| block_begin block_statements block_end {
		$$ = $3;
	}
;

block_begin:
	'{' {
	}
;

block_end:
	'}' {
	
	}
;

block_statements:
	block_statement
	| block_statements block_statement
;


block_statement:
	local_variable_declaration_statement
	| statement {
		current_decl->scope->statement.append( $1 );
	}
;

local_variable_declaration_statement:
	local_variable_declaration ';' {
		$$ = $1;
	}
;

final:
	FINAL_TK { $$ = ACC_FINAL; }
;

local_variable_declaration:
	type variable_declarators {
		$$ = DeclareVariable( 0, $1, $2 );
	}
	| final type variable_declarators {
		$$ = DeclareVariable( $1, $2, $3 );
	}
;

statement:
	statement_without_trailing_substatement
	| labeled_statement
	| if_then_statement
	| if_then_else_statement
	| while_statement
	| for_statement {
	}
;

statement_nsi:
	statement_without_trailing_substatement
	| labeled_statement_nsi
	| if_then_else_statement_nsi
	| while_statement_nsi
	| for_statement_nsi {
	
	}
;

statement_without_trailing_substatement:
	block
	| empty_statement
	| expression_statement
	| switch_statement
	| do_statement
	| break_statement
	| continue_statement
	| return_statement
	| synchronized_statement
	| throw_statement
	| try_statement
;


empty_statement:
	';' {
	
	}
;

label_decl:
	identifier ':' {
	}
;

labeled_statement:
	label_decl statement {
	}
;

labeled_statement_nsi:
	label_decl statement_nsi {
	
	}
;

expression_statement:
	statement_expression ';' {
	
	}
;

statement_expression: 
	assignment
	| pre_increment_expression
	| pre_decrement_expression
	| post_increment_expression
	| post_decrement_expression
	| method_invocation
	| class_instance_creation_expression
;

if_then_statement:
	IF_TK '(' expression ')' statement {
	
	}
;

if_then_else_statement:
	IF_TK '(' expression ')' statement_nsi ELSE_TK statement {
	
	}
;

if_then_else_statement_nsi:
	IF_TK '(' expression ')' statement_nsi ELSE_TK statement_nsi {
	
	}
;

switch_statement:
	switch_expression {
	
	}
	switch_block {
	
	}
;

switch_expression:
	SWITCH_TK '(' expression ')' {
	
	}
;

/* Default assignment is there to avoid type node on switch_block
   node. */

switch_block:
	'{' '}' {
	
	}
	| '{' switch_labels '}' {
	
	}
	| '{' switch_block_statement_groups '}' {
	
	}
	| '{' switch_block_statement_groups switch_labels '}' {
	
	}
;

switch_block_statement_groups: 
	switch_block_statement_group
	| switch_block_statement_groups switch_block_statement_group
;

switch_block_statement_group:
	switch_labels block_statements
;

switch_labels:
	switch_label
	| switch_labels switch_label
;

switch_label:
	CASE_TK constant_expression ':' {
	
	}
	| DEFAULT_TK ':' {
	
	}
;

while_expression:
	WHILE_TK '(' expression ')' {
	
	}
;

while_statement:
	while_expression statement {
	
	}
;

while_statement_nsi:
	while_expression statement_nsi {
	
	}
;

do_statement_begin:
	DO_TK {
	
	}
;

do_statement: 
	do_statement_begin statement WHILE_TK '(' expression ')' ';' {
	
	}
;

for_statement:
	for_begin ';' expression ';' for_update ')' statement {
	
	}
	| for_begin ';' ';' for_update ')' statement {
	
	}
;

for_statement_nsi:
	for_begin ';' expression ';' for_update ')' statement_nsi {
	
	}
	| for_begin ';' ';' for_update ')' statement_nsi {
	
	}
;

for_header:
	FOR_TK '(' {
	
	}
;

for_begin:
	for_header for_init {
	
	}
;

for_init:
	/* empty */
	| statement_expression_list {
	
	}
	| local_variable_declaration { 
	}
;

for_update:
	/* empty */
	| statement_expression_list {
	
	}
;


statement_expression_list:
	statement_expression {
	
	}
	| statement_expression_list ',' statement_expression {
	
	}
;

break_statement:
	BREAK_TK ';' {
	
	}
	| BREAK_TK identifier ';' {
	
	}
;

continue_statement:
	CONTINUE_TK ';' {
	
	}
	| CONTINUE_TK identifier ';' {
	
	}
;

return_statement:
	RETURN_TK ';' {
	
	}
	| RETURN_TK expression ';' {
	
	}
;

throw_statement:
	THROW_TK expression ';' {
	
	}
;

synchronized_statement:
	synchronized '(' expression ')' block {
	
	}
;

synchronized:
	modifiers {
	
	}
;

try_statement:
	TRY_TK block catches {
	}
	| TRY_TK block finally {
	
	}
	| TRY_TK block catches finally {
	}
;

catches:
	catch_clause
	| catches catch_clause {
	
	}
;

catch_clause:
	catch_clause_parameter block { 
	}

catch_clause_parameter:
	CATCH_TK '(' formal_parameter ')' {
	}
;

finally:
	FINALLY_TK block { $$ = $2; }
;

primary:
	primary_no_new_array
	| array_creation_expression
;


primary_no_new_array:
	literal { $$ = $1; }
	| THIS_TK { $$ = new(zone()) Unary(this, EXPR_THIS); }
	| '(' expression ')' { $$ = $2; }
	| class_instance_creation_expression
	| field_access
	| method_invocation
	| array_access
	| type_literals
	| name '.' THIS_TK {
	
	}
;

type_literals:
	name '.' CLASS_TK {
	
	}
	| array_type '.' CLASS_TK {
	
	}
	| primitive_type '.' CLASS_TK {
	
	}
	| VOID_TK '.' CLASS_TK {
	
	}
;

class_instance_creation_expression:
	NEW_TK class_type '(' argument_list ')' {
	
	}
	| NEW_TK class_type '(' ')' {
	
	}
	| anonymous_class_creation
;


anonymous_class_creation:
	NEW_TK class_type '(' argument_list ')' {
	
	} class_body { 
	}
	| NEW_TK class_type '(' ')'  { 
	
	} class_body { 
	}
;

argument_list:
	expression {
		$$ = new(zone()) List<Expression *>();
		$$->append( $1 );
	}
	| argument_list ',' expression {
		$$->append( $3 );
	}
;

array_creation_expression:
	NEW_TK primitive_type dim_exprs {
	
	}
	| NEW_TK class_or_interface_type dim_exprs {
	
	}
	| NEW_TK primitive_type dim_exprs dims {
	
	}
	| NEW_TK class_or_interface_type dim_exprs dims {
	
	}
	| NEW_TK class_or_interface_type dims array_initializer {
	
	}
	| NEW_TK primitive_type dims array_initializer {
	
	}
;

dim_exprs:
	dim_expr {
	
	}
	| dim_exprs dim_expr {
	
	}
;

dim_expr:
	'[' expression ']' { 
	}
;

dims:				
	'[' ']' {
		current_osb = 0;
	}
	| dims '[' ']' {
		current_osb++;
	}
;

field_access:
	primary '.' identifier {
	
	}
	| PARENT_TK '.' identifier {
	
	}
;

method_invocation:
	name '(' ')' {
	
	}
	| name '(' argument_list ')' {
	
	}
	| primary '.' identifier '(' ')' {
	
	}
	| primary '.' identifier '(' argument_list ')' {
	
	}
	| PARENT_TK '.' identifier '(' ')' {
	
	}
	| PARENT_TK '.' identifier '(' argument_list ')' {
	
	}
;

array_access:
	name '[' expression ']' {
	
	}
	| primary_no_new_array '[' expression ']' {
	
	}
;

postfix_expression:
	primary
	| name { $$ = new(zone()) Identifier(this, $1); }
	| post_increment_expression
	| post_decrement_expression
;

post_increment_expression:
	postfix_expression INCR_TK {
	
	}
;

post_decrement_expression:
	postfix_expression DECR_TK {
	
	}
;

unary_expression:
	pre_increment_expression
	| pre_decrement_expression
	| PLUS_TK unary_expression {
	
	}
	| MINUS_TK unary_expression {
	
	}
	| unary_expression_not_plus_minus
;





pre_increment_expression:
	INCR_TK unary_expression {
	
	}
;

pre_decrement_expression:
	DECR_TK unary_expression {
	
	}
;

unary_expression_not_plus_minus:
	postfix_expression
	| NOT_TK unary_expression {
	
	}
	| NEG_TK unary_expression {
	
	}
	| cast_expression
;

cast_expression:		/* Error handling here is potentially weak */
	'(' primitive_type dims ')' unary_expression {
	
	}
	| '(' primitive_type ')' unary_expression {
	
	}
	| '(' expression ')' unary_expression_not_plus_minus {
	
	}
	| '(' name dims ')' unary_expression_not_plus_minus { 
	}
;


multiplicative_expression:
	unary_expression
	| multiplicative_expression MULT_TK unary_expression {
	
	}
	| multiplicative_expression DIV_TK unary_expression {
	
	}
	| multiplicative_expression REM_TK unary_expression {
	
	}
;

additive_expression:
	multiplicative_expression
	| additive_expression PLUS_TK multiplicative_expression {
	
	}
	| additive_expression MINUS_TK multiplicative_expression {
	
	}
;

shift_expression:
	additive_expression
	| shift_expression LS_TK additive_expression {
	
	}
	| shift_expression RS_TK additive_expression {
	
	}
;

relational_expression:
	shift_expression
	| relational_expression LT_TK shift_expression {
	
	}
	| relational_expression GT_TK shift_expression {
	
	}
	| relational_expression LTE_TK shift_expression {
	
	}
	| relational_expression GTE_TK shift_expression {
	
	}
	| relational_expression INSTANCEOF_TK reference_type {
	
	}

;


equality_expression:
	relational_expression
	| equality_expression EQ_TK relational_expression {
	
	}
	| equality_expression NEQ_TK relational_expression {
	
	}
;

and_expression:
	equality_expression
	| and_expression AND_TK equality_expression {
	
	}
;

exclusive_or_expression:
	and_expression
	| exclusive_or_expression XOR_TK and_expression {
	
	}
;

inclusive_or_expression:
	exclusive_or_expression
	| inclusive_or_expression OR_TK exclusive_or_expression {
	}
;


conditional_and_expression:
	inclusive_or_expression
	| conditional_and_expression BOOL_AND_TK inclusive_or_expression {
	}
;

conditional_or_expression:
	conditional_and_expression
	| conditional_or_expression BOOL_OR_TK conditional_and_expression {
	}
;

conditional_expression:		/* Error handling here is weak */
	conditional_or_expression
	| conditional_or_expression REL_QM_TK expression ':' conditional_expression {
	}
;

assignment_expression:
	conditional_expression
	| assignment
;


assignment:
	left_hand_side assignment_operator assignment_expression {
	
	}
;

left_hand_side:
	name	{ $$ = new(zone()) Identifier(this, $1); }
	| field_access
	| array_access
;

assignment_operator:
	ASSIGN_ANY_TK
	| ASSIGN_TK
;

expression:
	assignment_expression
;

constant_expression:
	expression
;



%%