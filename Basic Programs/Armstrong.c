#include<stdio.h>
main()
{
    int s,r,n,x,t;
    printf("Armstrong Numbers:");
    scanf("%d",&t);
    for(n=1;n<=t;n++)
    {
        s=0;
        x=n;
        while(x!=0){
            r=x%10;
            s=s+r*r*r;
            x=x/10;
        }
        if(s==n)
            printf("%d\n",n);
    }
}
