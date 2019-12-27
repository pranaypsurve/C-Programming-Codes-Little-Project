#include<stdio.h>
int main()
{
while(1)
    {
int choice,a,b,c;
    printf("1.Addition\n");
    printf("2.Odd-Even\n");
    printf("3.N natural Numbers\n");
    printf("4.Exit\n");

printf("Enter Your Choise:\n");
scanf("%d",&choice);

switch(choice)
{
case 1:
    printf("Enter 2 no");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("add is : %d",c);
    break;
case 2:
    printf("Enter number");
    scanf("%d",&a);
    if(a%2==0)
        printf("No. is even");
    else
        printf("no. is Odd");
    break;
case 3:
    printf("Enter a number");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
        printf("%d\n",b);
        break;
case 4:
    exit(0);
default:
    printf("False");
}
}
getch();
}
