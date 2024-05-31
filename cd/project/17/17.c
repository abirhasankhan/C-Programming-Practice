#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int h1,h2,h3, m1,m2,m3;
    int x,y,z, hour,min;
    int a=0,b=0,c=0, su1=0,su2=0,su3=0,su4=0,su5=0,su6=0;
    printf("this  Minimum Time interval program is design for 00:01 AM to 23:59 PM");

    printf("\nEnter the time for hour:");
    scanf("%d", &h1);
    printf("Enter the time for min:");
    scanf("%d", &m1);
    a = (m1* 60) + (h1 * 60 * 60);

    printf("\nEnter the time for hour:");
    scanf("%d", &h2);
    printf("Enter the time for min:");
    scanf("%d", &m2);
    b = (m2* 60) + (h2 * 60 * 60);

    printf("\nEnter the time for hour:");
    scanf("%d", &h3);
    printf("Enter the time for min:");
    scanf("%d", &m3);
    c = (m3* 60) + (h3  * 60 * 60);


    su1 = a-b;
    su2 = a-c;
    su3 = b-a;
    su4 = b-c;
    su5 = c-a;
    su6 = c-b;


    if(su1>0)
    {
        x=su1;
    }
    if(su3>0)
    {
        x=su3;
    }

    if(su2>0)
    {
        y=su2;
    }
    if(su5>0)
    {
        y=su5;
    }

    if(su4>0)
    {
        z=su4;
    }
    if(su6>0)
    {
        z=su6;
    }

    int t;

    if (y < x) t = x, x = y, y = t;
    if (z < y) t = y, y = z, z = t;
    if (y < x) t = x, x = y, y = t;

    hour = (x/3600);
    min = (x -(3600*hour))/60;

    printf("\nMinimum Time interval: %d Hour %d Minute\n",hour,min);

    return 0;
}
