#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j)
            {
                printf("%d",i);
            }
            else{printf("0");}
        }
         printf("\n");
    }
}
