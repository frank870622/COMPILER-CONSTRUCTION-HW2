/*	Definition section */
%{
#include <stdio.h>

extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex

void yyerror(char*);

/* Symbol table function - you can add new function if needed. */
int lookup_symbol();
void create_symbol();
void insert_symbol();
void dump_symbol();

%}

/* Use variable or self-defined structure to represent
 * nonterminal and token type
 */
%union {
    int i_val;
    double f_val;
    char* string;
}

/* Token without return */
    /* Arithmetic */
%token ADD SUB MUL DIV MOD INC DEC
    /* Relational */
%token MT LT MTE LTE EQ NE
    /* Assignment */
%token ASGN ADDASGN SUBASGN MULASGN DIVASGN MODASGN
    /* Logical */
%token AND OR NOT
    /* Delimiters */    
%token LB RB LCB RCB LSB RSB COMMA
    /* Print Keywords */
%token PRINT 
    /* Condition and Loop Keywords */
%token IF ELSE FOR WHILE
    /* Declaration Keywords */
%token VOID INT FLOAT STRING BOOL
    /* boolean Keywords */
%token TRUE FALSE

%token RETURN
%token ID SEMICOLON
%token COMMENT_LINE

/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST
%token <string> STRING_TEXT

/* Nonterminal with return, which need to sepcify type */
//%type <f_val> stat

/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

program
    : program stat
    | COMMENT_LINE
;

stats
    : stat
    | funtcion_declation
;

stat_list
    : stat_list stat
    | stat
;

stat
    : declaration_stat
    | compound_stat
    | expression_stat
    | print_func
;

declaration_stat
    : type declaration
;

declaration
    : ID ASGN initializer SEMICOLON
    | ID SEMICOLON
    | ID ASGN initializer COMMA declaration SEMICOLON
    | ID COMMA declaration SEMICOLON
;

initializer
    : arithmetic_stat
;

arithmetic_stat
    : lv2_arithmetic_stat ADD arithmetic_stat
    | lv2_arithmetic_stat SUB arithmetic_stat
    | lv2_arithmetic_stat
;

lv2_arithmetic_stat
    : lv3_arithmetic_stat MUL lv2_arithmetic_stat
    | lv3_arithmetic_stat DIV lv2_arithmetic_stat
    | lv3_arithmetic_stat MOD lv2_arithmetic_stat
    | lv3_arithmetic_stat
;

lv3_arithmetic_stat
    : INC lv3_arithmetic_stat
    | DEC lv3_arithmetic_stat
    | lv3_arithmetic_stat INC
    | lv3_arithmetic_stat DEC
    | value_stat
;



value_stat
    : ADD value_stat;
    | SUB value_stat;
    | STRING_TEXT
    | value
;

value
    : I_CONST
    | F_CONST
    | TRUE
    | FALSE
    | ID
;

funtcion_declation
    : type ID LB function_parameter_decl RB SEMICOLON
    | type ID LB function_parameter RB LCB stat_list RCB
;


function_parameter_decl
    : type
    | function_parameter_decl COMMA type
;

function_parameter
    : type ID
    | function_parameter COMMA type ID
;

compound_stat
    : if_else_stat
    | while_stat
;

if_else_stat
    : if_stat
    | if_stat else_stat
;

if_stat
    : IF LB logical_stats RB SEMICOLON
    | IF LB logical_stats RB stat
    | IF LB logical_stats RB LCB stat_list RCB
;

else_stat
    : ELSE stat SEMICOLON
    | ELSE LCB stat_list RCB
;

logical_stats
    : logical_stats logical_operation logical_stat
    | logical_stat
;

logical_stat
    : value_stat MT value_stat
    | value_stat LT value_stat
    | value_stat MTE value_stat
    | value_stat LTE value_stat
    | value_stat EQ value_stat
    | value_stat NE value_stat
    | value_stat
;

logical_operation
    : AND
    | OR
;

while_stat
    : WHILE LB logical_stats RB SEMICOLON
    | WHILE LB logical_stats RB stat SEMICOLON
    | WHILE LB logical_stats RB LCB stat_list RCB 
;

expression_stat
    : assignment_stat 
    | function_call
    | RETURN arithmetic_stat SEMICOLON
;

assignment_stat
    : ID ASGN arithmetic_stat SEMICOLON
    | ID ADDASGN arithmetic_stat SEMICOLON
    | ID SUBASGN arithmetic_stat SEMICOLON
    | ID MULASGN arithmetic_stat SEMICOLON
    | ID DIVASGN arithmetic_stat SEMICOLON
    | ID MODASGN arithmetic_stat SEMICOLON
    | assignment_stat COMMA assignment_stat
;

function_call
    : ID LB function_send_parameter RB SEMICOLON
;

function_send_parameter
    : function_send_parameter COMMA arithmetic_stat
;

print_func
    : PRINT LB ID RB SEMICOLON 
    | PRINT LB STRING_TEXT RB SEMICOLON 
;

/* actions can be taken when meet the token or rule */
type
    : INT
    | FLOAT
    | BOOL
    | STRING
    | VOID
;

%%

/* C code section */
int main(int argc, char** argv)
{
    yylineno = 0;

    yyparse();
	printf("\nTotal lines: %d \n",yylineno);

    return 0;
}

void yyerror(char *s)
{
    printf("\n|-----------------------------------------------|\n");
    printf("| Error found in line %d: %s\n", yylineno, buf);
    printf("| %s", s);
    printf("\n|-----------------------------------------------|\n\n");
}

void create_symbol() {}
void insert_symbol() {}
int lookup_symbol() {}
void dump_symbol() {
    printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");
}
