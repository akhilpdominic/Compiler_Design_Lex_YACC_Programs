#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define size 1024
char idMap[30][30]={};
int idp=0;
char keyword[32][30]={"void","main","int","char","float","break","if","continue"};

bool isdelimiter(char c)
{
    if(c=="{"||c=="}"||c=="|"||c=="("||c==")"||c=="<"||c==">")
    return true;

    return false;
}

bool isOperator(char c)
{
    if(c=="+"||c=="/"||c=="*"||c=="-")
    return true;

    return false;
}

bool isidentifier(char str[1000])
{
    if(isdigit(str[0]))
    return false;

    for(int i=0;i<idp;i++)
    {
        if(strcmp(idMap[i],str)==0)
        {
            printf("Duplicate identifier found : %s",str);
            return true;
        }
    }

    strcpy(idMap[idp],str);
    idp++;
    return true;

}

bool iskeyword(char str[1000])
{
    for(int i=0;i<7;i++)
    {
        if(strcmp(str,keyword[i])==0)
        return true;
    }
    return false;
}

int main()
{
    FILE *ptr;
    char str[1000];
    ptr=fopen("/Users/akhilpdominic/Desktop/CDlab/textf","r");
    while(fscanf(ptr,"%s",&str)==1)
    {
        if(str[0]=='#')
            break;
        {
            if(!iskeyword(str))
            {
                if(isidentifier(str))
                {
                    printf("Identifier : %s",str);
                }
                if(isOperator(str))
                {
                    printf("Operator : %s",str);
                }
            }
        }
    }
    
    return 0;
}