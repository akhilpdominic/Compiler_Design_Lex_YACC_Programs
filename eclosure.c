#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int n;
    int state[30];
    printf("Enter the number of states : \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the state label for state %d : ",i+1);
        scanf("%d",&state[i]);
    }

    char alpha[30][30];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("Transition %d -> %d : ",i,j);
            scanf("%s",&alpha[i][j]);
        }
    }

    printf("\n\n The e-closure \n\n");
    for(int i=1;i<=n;i++)
    {
        printf("E-closure of %d ={ %d , ",i,i);
        for(int j=1;j<=n;j++)
        {
            if(alpha[i][j]=='e')
            {
                printf("%d ,",j);
                for(int k=j;k<=n;k++)
                {
                    if(alpha[j][k]=='e')
                    printf("%d",k);
                }
            }
        }

        printf("} \n");
    }
    return 0;
}