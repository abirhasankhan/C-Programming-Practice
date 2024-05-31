  #include<stdio.h>
  int main()
  {
   int i,j,k,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(k=i;k<=n;k++)
        {
            printf("%d",k);
        }
        printf("\n");
     }
}

