#include<stdio.h>

int same_sequence(char str1[],char str2[])
{
    int i,f;
    for(i=0; str2[i] && str2[i]!=str1[0]; i++);
    if(str2[i]==str1[0]) f=i;
    else return 0;
    int s;
    for(s=0; str2[s]; s++);

    for(i=1,f=(f+1)%s; str1[i] && str1[i]==str2[f]; i++,f=(f+1)%s);
    if(!str1[i]) return 1;
    else return 0;
}

int main()
{
    char str1[100],str2[100];
    gets(str1);
    gets(str2);
    same_sequence(str1,str2) ? printf("Same Sequence\n") : printf("Not Same Sequence\n");
    return 0;
}
