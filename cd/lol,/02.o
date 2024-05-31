#include<stdio.h>
int main()
{
    int *arr,n;
    int i,index,min=9999;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
        if(*(arr+i)<min)
        {
            min = *(arr+i);
            index = i;
        }
    }
    printf("lowest city %d temp is %d",index,min);
}

