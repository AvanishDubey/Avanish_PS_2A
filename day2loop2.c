#include<stdio.h>
void main()
{
    int i,j=0,k=1,c,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
         j=i;
         while(j<n)
         {
           printf(" ");
           j++;
         }
         for(c=1;c<=i;c++)
         {
            printf("%d",c);

         }
         for(k=i-1;k>0;k--)
         {
             printf("%d",k);
         }
         printf("\n");
     }

}
