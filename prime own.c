#include<stdio.h>
main()
{
    int n,i,temp=0;
    printf("Enter No To Check:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            temp++;
        }
    }
    if(temp==1)
    {
        printf("Prime\n");
    }else
    printf("Not a Prime Number\n");
}
