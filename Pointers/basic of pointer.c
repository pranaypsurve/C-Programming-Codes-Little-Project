#include<stdio.h>
int main()
{
    int x=5,*j;
    j=&x;
    printf("%d %d\n",*j,&x);   // mrmory block address
    printf("%d %d\n\n",*j,j);    // derefencing


    int a=5,*p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("Content = %d  Address of a %d \n",a,&a);
    printf("Address Of p %d  A %d\n",&p,p);
    printf("Address Of q %d  P %d\n",&q,q);
    printf("Address Of r %d  Q %d\n",&r,r);
    ***r=4;
    printf("%d\n",***r);
    printf("%d",a);
}
