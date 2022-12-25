#include<stdio.h>
void main()
{
    int n,i,sum=0,f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
        sum=sum+f;
    }
      printf("sum of %d is %d",n,sum);
}
