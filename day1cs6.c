#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of the triangle a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c)
        printf("Triangle is equilateral");
    else if(a==b||b==c||c==a)
    printf("Triangle is isosceles");
    else
        printf("triangle is scalene");

}
