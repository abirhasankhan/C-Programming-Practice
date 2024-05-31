#include<stdio.h>
int main()
{
    int *arr,n;
    int i,index,min=9999;
    float sum=0,ave=0;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        sum = sum + *(arr+i);
        ave = sum/n;
    }
    printf("ave is %f",ave);
}

