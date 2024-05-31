#include<stdio.h>
int main()
{
    int a,b,c;
    int sum, avg;
    printf("enter the number: ");
    scanf("%d",&a);
    printf("enter the number: ");
    scanf("%d",&b);
    sum = a+b;

    avg = sum/2;

    printf("the sum is: %d",sum);
    printf("\nenter 6 for average: ");
    scanf("%d",&c);
    if(6 == c){
    printf("nthe average is: %d",avg);
    }
    else{
        printf("you entered worng number");
    }

    return 0;
}
