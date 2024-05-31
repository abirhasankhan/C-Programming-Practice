#include<stdio.h>
int main()
{
    int n,m,count=0,i;
    scanf("%d %d",&n,&m);
    printf("Leap years between %d to %d are:\n",n,m);
    for(i=n;i<=m;i++)
    {
        if(i%4==0)
        printf("%d\n", i);

        if(i%4==0)
        count++;


    }

    printf("The number of leap year is %d\n",count);


}
