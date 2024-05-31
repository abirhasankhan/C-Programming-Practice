#include<stdio.h>
#include <stdlib.h>
int main()

{
    int arr[100];
    int i,j,n,count=0;
    printf("enter the number of array: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}
