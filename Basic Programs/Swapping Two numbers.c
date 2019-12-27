#include<stdio.h>
main()
{
    int a,b,temp;
    printf("Enter 2 no:");
    scanf("%d%d",&a,&b);
    /*temp=a;
    a=b;
    b=temp;*/
    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d b=%d",a,b);
}
