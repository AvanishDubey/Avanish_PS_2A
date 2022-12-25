#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the coordinates x and y:");
    scanf("%d%d",&x,&y);
    if(x>0&&y>0)
        printf("coordinates are in first quadrant");
    else if(x<0&&y>0)
        printf("coordinates are in Second quadrant");
    else if(x<0&&y<0)
        printf("coordinates are in Third quadrant");
    else if(x>0&&y<0)
        printf("coordinates are in Fourth quadrant");
}
