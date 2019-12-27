#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Address of a: %d  in p:%d\n",&a,p);
    printf("Address of b: %d\n",q);
    printf("%d",p-1);
}
