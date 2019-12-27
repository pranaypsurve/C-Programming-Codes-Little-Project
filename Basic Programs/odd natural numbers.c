#include<stdio.h>
main()
{
    /*
    int i=1;
    while(i<=10)
    {
        printf("%d ",2*i-1);
        i++;
    }  */

    int i=1,n;
    printf("Enter Number:");
    scanf("%d",&n);
    while(i<=2*n)
    {
        printf("%d ",i);
        i=i+2;
    }
}
