//1. Write a C program to accept two integers and check whether they are equal or not.

#include<stdio.h>
int main()
{
int a,b;
printf("Enter Number");
scanf("%d%d",&a,&b);
if(a==b)
    printf("a and b is equal");
else
    printf("a and b not equal");
}
