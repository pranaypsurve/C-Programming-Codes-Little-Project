#include<stdio.h>
main()
{
    int x,i;
    printf("Enter No:");
    scanf("%d",&x);
    for(i=2;i<=x;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("Prime");
    else
        printf("Not Prime");
}
