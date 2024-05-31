#include <stdio.h>
#include <stdlib.h>

int a = 12345, b, sum = 0;

void doAdd()
{
    sum += b % 10;
    b = b / 10;
}

int main()
{
    b = a;
    printf("%d", a);

    doAdd();
    doAdd();
    doAdd();
    doAdd();
    doAdd();

    printf("\n%d",sum);
    return 0;
}
