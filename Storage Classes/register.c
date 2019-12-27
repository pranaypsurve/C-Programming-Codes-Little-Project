#include<stdio.h>
main()
{
    register int x=5;
    int y;
    y=x;
    printf("%d\n",y);
    x++;
    printf("%d\n",x);
    x=++y;
    printf("%d\n",x);
    printf("%d",y);

}
