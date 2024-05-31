#include<stdio.h>
#include<stdio.h>
int main ()
{
    int i,len;
    int count = 0;
    char str[99];
    gets(str);
    len = strlen(str);
    for(i=0; i<len-1; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    printf("%d",count);

}
