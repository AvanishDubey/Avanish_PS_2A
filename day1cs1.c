#include<stdio.h>
void main()
{
    int basic,da,hra,allow,pf,total;
    char grade;
    printf("Enter the basic salary");
    scanf("%d",&basic);
    printf("Enter the grade");
    scanf("%d",&grade);
    if(grade=='A')
     allow=1700;
     else if(grade=='B')
     allow=1500;
     else if(grade=='C')
        allow=1300;
     hra=0.2*basic;
     da=0.5*basic;
     pf=0.11*basic;
     total=basic+hra+da+allow-pf;
     printf("the total is %d",total);


}
