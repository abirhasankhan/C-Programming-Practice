#include<stdio.h>
int main()
{
    float a,b,c,sum,ave;
    a = 1.1;
    b = 2.2;
    c = 3.3;
    sum = 0;
    ave = 1;
    sum = a+b+c;
    ave = sum/3;
    printf("average: %f",ave);
    return 0;
}
