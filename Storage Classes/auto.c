#include<stdio.h>
main()
{
    int x=5;
    printf("%d\t\n",x);
    {
        int x=6;
    printf("%d\n",x);
    }

    printf("%d",x);
}
