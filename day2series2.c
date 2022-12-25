#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,x,a=1;
    float c=0,sum=0;
    printf("Enter the value of n and x:");
    scanf("%d%d",&n,&x);
    for(i=1;i<n;i++)
    {
        a=a*i;
        c=c+(pow(x,i)/a);
    }
    sum=1+c;
    printf("%f",sum);
}
