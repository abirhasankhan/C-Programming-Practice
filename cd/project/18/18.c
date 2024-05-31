#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int h1,h2,h3, m1,m2,m3;
    int x,y,z, hour,min;
    int a=0,b=0,c=0, su1=0,su2=0,su3=0,su4=0;
    printf("this  Maximun Time interval program is design for 00:01 AM to 23:59 PM");

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
    su3 = b-a;
    su2 = b-c;
    su4 = c-b;
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
    if(su4>0)
    {
        y=su4;
    }


    if(x>y)
    {
        z=x;
    }

    if(x<y)
    {
        z=y;
    }


    hour = (z/3600);
    min = (z -(3600*hour))/60;

    printf("\nMinimum Time interval: %d Hour %d Minute\n",hour,min);

    return 0;
}
