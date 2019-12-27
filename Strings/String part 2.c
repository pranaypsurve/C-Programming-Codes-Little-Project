#include<stdio.h>
#include<conio.h>
int main()
{
    char name[3][10];
    int i;
    printf("Enter Three Strings");
    for(i=0;i<=2;i++)
        gets(name[i]);
    for(i=0;i<=2;i++)
        puts(name[i]);
}
