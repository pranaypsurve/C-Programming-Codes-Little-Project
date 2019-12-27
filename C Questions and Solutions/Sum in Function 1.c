// write a program in c to add two numbers in c

#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
    int a,b,c;
    printf("Enter 2 no");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("%d",c);
}

int add(int x,int y)
{
    int c;
    c=x+y;
    return c;
}
