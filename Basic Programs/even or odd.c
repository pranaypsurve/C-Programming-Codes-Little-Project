#include<stdio.h>
main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    //if(x%2==0)
    if(x&1)
        printf("Odd no");
    else
        printf("even no");
}
