#include<stdio.h>
#include<conio.h>
int main()
{
    void input(int *);
    int a[5];
    input(a);
    display(a);
}
void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        scanf("%d",p+i);
}
void display(int *p)
{
    int i;
    for(i=0;i<=4;i++)
        printf("%d",*(p+i));
}
