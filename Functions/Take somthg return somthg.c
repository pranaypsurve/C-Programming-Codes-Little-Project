#include<stdio.h>
#include<conio.h>
int add(int,int);
main()
{
    int a,b;
    printf("Enter 2 no");
    scanf("%d%d",&a,&b);
    int s=add(a,b);
    printf("%d",s);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
