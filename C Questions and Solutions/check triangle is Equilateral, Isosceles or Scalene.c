
// 14. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter Triangle Sides: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
    printf("This is an Equilateral");
    else
        if(a==b||b==c|a==c)
        printf("This is an Isosceles triangle");
    else
        printf("This is an Scalene Triangle");
}
