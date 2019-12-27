// 3. Write a C program to check whether a given number is positive or negative.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter number :");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d Positve",a);
    }
    else
    {
        printf("%d negative",a);
    }
}
