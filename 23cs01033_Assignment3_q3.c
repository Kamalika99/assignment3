#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 numbers in desending order");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b>c & b+c>a & c+a>b & b>a-c & a>b-c & c>a-b)
  { printf("given sides can make a triangle");}
  else 
  { printf(" triangle cannot be formed");}
}