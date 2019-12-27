#include<stdio.h>
#include<conio.h>
void add(void);//declare
main()
{

    add();
}

void add(void)    //function definitation
{
    int a,b,c;
    printf("Enter 2 no");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d",c);
}
