#include<stdio.h>
int main()
{
    int arr[50];
    int i,n;
    printf("enter array box size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        arr[i] = arr[i]+5;
    }
    for(i=0; i<n; i++)
    {
        printf("%d",&arr[i]);
    }

    return 0;

}
