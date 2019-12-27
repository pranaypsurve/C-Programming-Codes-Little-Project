#include<stdio.h>
#include<conio.h>
void add(int,int);
main()
{
    int x,y;
    printf("Enter number");
    scanf("%d%d",&x,&y);
    add(x,y);    //Actual Aurgument
}

void add(int a,int b)      //Formal Aurgument
{
    int c;
    c=a+b;
    printf("%d",c);
}
