#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b & a>c)
    { printf("first no is largest"); }
    else if (b>a & b>c)
    { printf(" second no is largest");}
    else 
    { printf("third no is largest");}
}