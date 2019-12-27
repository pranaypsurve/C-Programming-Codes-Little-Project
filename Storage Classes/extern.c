#include<stdio.h>
//int x;
main()
{
    extern int x;
    //void f1();
    printf("x=%d\n",x);
    f1();
    printf("x=%d\n",x);
}
int x;
int f1()
{
    x++;
    printf("x=%d\n",x);
}
