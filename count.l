%{

    #include<stdio.h>
    int vow=0,con=0;
%}

%%

[aeiouAEIOU] {vow++;}
[a-zA-Z] {con++;}
"\n" printf("%d %d",vow,con);
 

%%

int main()
{
    
    yylex();
    
    return 0;
}

int yywrap()
{
    return 1;
}