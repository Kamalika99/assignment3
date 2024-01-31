#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the coordinates");
    scanf("%d%d,%d%d,%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if((y2-y1)*(x2-x3) == (y2-y3)*(x2-x1))
    { printf("points are collinear");}
    else 
    {printf("non collinear");}
}