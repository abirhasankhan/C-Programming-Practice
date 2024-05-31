#include<stdio.h>
void swap(int*x,int*y)
{
    int t;
    t = *y ;
    *y = *x;
    *x = t;
}

int main()
{
    int a,b;
    scanf("%d %d\n",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
}
