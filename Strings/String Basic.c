#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20],i;
    puts("Enter Your name");
    gets(name);
    int s=strlen(name);
    printf("%d\n",s);
    for(i=0;name[i]!=0;i++)
    puts(name);
}
