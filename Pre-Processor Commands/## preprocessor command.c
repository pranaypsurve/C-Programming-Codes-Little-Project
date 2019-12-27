#include<stdio.h>
#define action(a,b) a##b+a*b
main()
{

    printf("%d",action(5,5));
}
