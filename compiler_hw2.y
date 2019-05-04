/*	Definition section */
%{
#include <stdio.h>
#include <string.h>
extern int yylineno;
extern int yylex();
extern char* yytext;   // Get current token from lex
extern char buf[256];  // Get current code line from lex

void yyerror(char*);

/* Symbol table function - you can add new function if needed. */
int lookup_symbol(char*);
void create_symbol();
void insert_symbol(char*, int, int, int[]);
void dump_symbol(int);
void clear_symbol(int);

typedef struct parse_table{
    //from 0~
    int index;
    char* name;
    // 1:variable 2:function
    int kind;
    // 1:int 2:float 3:bool 4:string 5:void
    int type;
    // from 0~
    int scope;
    // 1:int 2:float 3:bool 4:string 5:void
    int* attribute;
    struct parse_table* next;
    struct parse_table* back;
}parse_table;

parse_table *head;

int scope_num = 0;
int index_num = 0;
int function_parameter_num = 0;
int variable_declare_count = 0;

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
%token ENDFILE
//%token COMMENT_LINE

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
    : program stats
    | stats
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
    | type ID LB RB SEMICOLON
    | type ID LB function_parameter RB LCB stat_list RCB
    | type ID LB RB LCB stat_list RCB
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
    | arithmetic_stat SEMICOLON
    | assignment_stat COMMA assignment_stat
;

function_call
    : ID LB function_send_parameter RB SEMICOLON
;

function_send_parameter
    : function_send_parameter COMMA arithmetic_stat
    | arithmetic_stat
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
    create_symbol();

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

void create_symbol() {
    head = (parse_table*)malloc(sizeof(parse_table));
    head->index = -1;
    head->name = NULL;
    head->kind = -1;
    head->type = -1;
    head->scope = -1;
    head->attribute = NULL;
    head->next = NULL;
    head->back = head;
}

void insert_symbol(char* Name, int Kind, int Type, int* Attribute) {
    if(head->index == -1){
        head->index = index_num;
        head->name = (char*)malloc(sizeof(char)*strlen(Name)+1);
        strncpy(head->name, Name, strlen(Name));
        head->kind = Kind;
        head->type = Type;
        head->scope = scope_num;
        
        if(function_parameter_num > 0){
            head->attribute = (int*)malloc(sizeof(int)*function_parameter_num);
            for(int i = 0; i<function_parameter_num; ++i)
                head->attribute[i] = Attribute[i];
        }
        head->next = NULL;
        head->back = head;
    }
    else{
        parse_table* temp = head;
        while(temp->next != NULL)   temp = temp->next;
        temp->next = (parse_table*)malloc(sizeof(parse_table));
        temp->next->back = temp;
        temp = temp->next;

        temp->index = index_num;
        head->name = (char*)malloc(sizeof(char)*strlen(Name)+1);
        strncpy(temp->name, Name, strlen(Name));
        temp->kind = Kind;
        temp->type = Type;
        temp->scope = scope_num;

        if(function_parameter_num > 0){
            temp->attribute = (int*)malloc(sizeof(int)*function_parameter_num);
            for(int i = 0; i<function_parameter_num; ++i)
                temp->attribute[i] = Attribute[i];
        }
        temp->next = NULL;
    }
    index_num++;
    function_parameter_num = 0;
}

int lookup_symbol(char* Name) {
    if(head->index == -1){
        yyerror(("Undeclared variable %s", Name));
    }
    else{
        parse_table* temp = head;
        while(temp->next != NULL){
            if(strcmp(temp->name, Name) == 0)   return 0;
            temp = temp->next;
        }   
        yyerror(("Undeclared variable %s", Name));
    }
}

void dump_symbol(int dump_scope_num) {
    int index_count = 0;
    printf("\n%-10s%-10s%-12s%-10s%-10s%-10s\n\n",
           "Index", "Name", "Kind", "Type", "Scope", "Attribute");
    if(head->index != -1){
        parse_table* temp = head;
        do{
            if(temp->scope == dump_scope_num){
                printf("\n%-10d", index_count);
                printf("%-10s", temp->name);

                if(temp->kind ==1)          printf("%-12s", "variable");
                else if (temp->kind ==2)    printf("%-12s", "function");

                if(temp->type == 1)         printf("%-10s", "int");
                else if(temp->type == 2)    printf("%-10s", "float");
                else if(temp->type == 3)    printf("%-10s", "bool");
                else if(temp->type == 4)    printf("%-10s", "string");
                else if(temp->type == 5)    printf("%-10s", "void");

                printf("%-10d", dump_scope_num);

                if(temp->attribute != NULL){
                    if(temp->attribute[0] == 1)         printf("int");
                    else if(temp->attribute[0] == 2)    printf("float");
                    else if(temp->attribute[0] == 3)    printf("bool");
                    else if(temp->attribute[0] == 4)    printf("string");
                    else if(temp->attribute[0] == 5)    printf("void");
                    for(int i=1; i< sizeof(temp->attribute)/sizeof(temp->attribute[0]); ++i){
                        if(temp->attribute[i] == 1)         printf(", int");
                        else if(temp->attribute[i] == 2)    printf(", float");
                        else if(temp->attribute[i] == 3)    printf(", bool");
                        else if(temp->attribute[i] == 4)    printf(", string");
                        else if(temp->attribute[i] == 5)    printf(", void");
                    }
                }
                printf("\n");
                index_count++;
            }
            temp = temp->next;
        }while(temp != NULL);
        clear_symbol(dump_scope_num);
    }
}

void clear_symbol(int scope_num){
    if(scope_num != 0){
        parse_table* temp = head;
        if(temp->index != -1){
            while(temp->next != NULL){
                if(temp->scope == scope_num){
                    temp->back->next = temp->next;
                    temp->next->back = temp->back;
                    parse_table* deletenode = temp;
                    temp = temp -> next;
                    free(deletenode);
                }
            }
        }
    }
}