#include<stdio.h>
main()
{
    int count=0,x;
    printf("Enter No");
    scanf("%d",&x);
    while(x!=0){
        x=x/10;
        count++;
    }
    printf("Total Digits is %d ",count);
}
