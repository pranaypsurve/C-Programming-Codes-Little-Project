#include<stdio.h>
main()
{
    f1();
    f1();
    f1();
    f1();
    f1();

}
void f1()
{
    static int i;
    i++;
    printf("i=%d\n",i++);
}
