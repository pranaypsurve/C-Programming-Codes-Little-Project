// 2. Write a C program to check whether a given number is even or odd.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
}
