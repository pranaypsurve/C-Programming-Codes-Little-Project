#include<stdio.h>
main()
{
    int a,b,l;
    printf("Enter Two No:");
    scanf("%d%d",&a,&b);
    for(l=1;l<=a*b;l++)
        if(l%a==0&&l%b==0)
        break;
        printf("%d",l);
}
