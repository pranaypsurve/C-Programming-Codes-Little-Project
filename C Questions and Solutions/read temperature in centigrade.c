// 13. Write a C program to read temperature in centigrade and display a suitable message according to temperature state below
#include<stdio.h>
#include<conio.h>
int main()
{
    int temp;
    printf("Enter Day Temperature");
    scanf("%d",&temp);
    if(temp<0)
        printf("Freezing Temperature");
    else if(temp<=10)
    printf("Very Cold Weather");
    else if(temp<=20)
        printf("Cold Weather");
    else if(temp<=30)
        printf("Normal temperature");
    else if(temp<=40)
        printf("Its hot");
    else
        printf("Its very hot");
}
