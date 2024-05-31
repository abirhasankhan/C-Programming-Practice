#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum;
    int term;
    sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       term=1;
      for(j=1;j<=i;j++)
      {
        term=term*j;
      }
      sum=sum+term;
    }
    printf("%d",sum);
}
