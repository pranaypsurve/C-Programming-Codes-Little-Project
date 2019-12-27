#include<conio.h>
#include<stdio.h>
union test
{
    int a;
   double b;
    char c;
}t1;
main()
{

    printf("%d",sizeof(t1));
}
