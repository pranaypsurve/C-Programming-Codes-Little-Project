// 11. Write a C program to calculate the root of a Quadratic Equation.
#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("Enter Number");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("Both Roots Are Equal");
        x1=-b/(2.0*a);
        x2=x1;
        printf("First Root root1 %f",x1);
        printf("Second Root root2 %f",x2);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("First Root root1 %f",x1);
        printf("Second Root root2 %f",x2);
    }
    else
        printf("Root are imeainary;\nNo solution");

}
