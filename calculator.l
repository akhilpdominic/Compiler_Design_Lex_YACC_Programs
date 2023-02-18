%{
#include<stdio.h>
int a,b,op=0;
%}

%%

[0-9]+ {if(op==0)
    {
        a=atoi(yytext);
    }
    else{
        b=atoi(yytext);
        if(op==1)
        {
            a=a+b;
        }
        else if(op==2)
        {
            a=a-b;
        }
    }}
"+" {op=1;}
"-" {op=2;}
"\n" {printf("Answer is : %d",a);}

%%



int main()
{
    printf("Enter the expression : ");
    yylex();
}