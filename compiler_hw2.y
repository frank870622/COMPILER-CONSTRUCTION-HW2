/*	Definition section */
%{
extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex

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
%token COMMENT

/* Token with return, which need to sepcify type */
%token <i_val> I_CONST
%token <f_val> F_CONST
%token <string> STRING_STATE

/* Nonterminal with return, which need to sepcify type */
//%type <f_val> stat

/* Yacc will start at this nonterminal */
%start program

/* Grammar section */
%%

program
    : program stat
    |
;

stat
    : declaration_stat
    | compound_stat
    | expression_stat
    | print_func
;

declaration_stat
    : type declaration
    | funtcion_declation
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
    : arithmetic_stat ADD value_stat
    | arithmetic_stat SUB value_stat
    | high_arithmetic_stat
    | value_stat
;

high_arithmetic_stat
    : high_arithmetic_stat MUL value_stat
    | high_arithmetic_stat DIV value_stat
    | high_arithmetic_stat MOD value_stat
    | value_stat
;

value_stat
    : ADD value_stat;
    | SUB value_stat;
    | value
;

value
    : I_CONST
    | F_CONST
    | STRING_STATE
    | ID
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
