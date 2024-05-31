#include<stdio.h>
int main()
{
    int n,i,pre,count=0;
    printf("Enter the number of stone:");
    scanf("%d",&n);
    int ara[n];
    for(i=0; i<n; i++)
    {
        printf("Enter the heights of stone:\n");
        scanf("%d",&ara[i]);
    }
    pre=ara[0];
    for(i=1; i<n; i++)
    {
        if(ara[i]>pre)
        {
            count++;
        }
        pre=ara[i];
    }
    printf("The number of jumps:\n%d Jumps",count);
    return 0;
}
