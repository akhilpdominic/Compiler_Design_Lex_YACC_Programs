%{

#include<stdio.h>
int valid=1;

%}
%token digit letter

%%

start: letter s
s : letter s|
    digit s|
    ;

%%


int yyerror()
{
    printf("error \n");
    valid=0;
    return 0;
}
int main()
{
    yyparse();

    if(valid)
    {
        printf("identifier found \n");
    }
}
