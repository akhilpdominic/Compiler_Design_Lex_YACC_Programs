%{
    int n=0;
%}
%%

"while"|"for"|"int"|"float"|"double"|"char"|"if"|"break"|"continue" {printf("keywords");n++;}
[0-9][0-9]* {printf("digit");n++;}
[a-zA-Z][a-zA-Z0-9_]* {printf("identifier");n++;}
"+"|"-"|"*"|"/"|"%" {printf("operator");n++;}

"\n" {printf("The number of tokens %d",n);} 

%%

int main()
{
    printf("Enter the string : ");
    yylex();
    
}