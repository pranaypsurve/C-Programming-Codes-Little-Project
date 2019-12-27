#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct date
{
    int d,m,y;
}d1;
void main()
{
    struct date today;
    today.d=26;
    today.m=10;
    today.y=2019;
    printf("%d/%d/%d\n\n",today.d,today.m,today.y);
    d1=today;
   // scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("%d/%d/%d",d1.d,d1.m,d1.y);
}
