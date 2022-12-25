#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("Enter the value of n");
    scanf("%d",&n);
    k='A';
    for(i=1;i<=n;i++)
{
        for(j=1;j<=i;j++)
    {
        printf("%c",k);
            k=k+1;
    }
      printf("\n");
}

}
