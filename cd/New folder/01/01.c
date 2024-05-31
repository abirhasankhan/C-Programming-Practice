#include<stdio.h>
int main()
{
    int n,i,j;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
         printf("%d\n",i);
        count=0;

    }
}
