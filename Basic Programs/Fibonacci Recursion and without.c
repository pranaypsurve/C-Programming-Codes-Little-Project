#include<stdio.h>
main()
{
    /*
    int fib(int);
    int i,n;
    printf("Enter Fibonacci Term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",fib(i));*/
        int n1=0,n2=1,n3,i,number;
        printf("Enter Fibonacci Term");
    scanf("%d",&number);
    //printf("%d %d ",n1,n2);
        if(number>0)
        printf("1
               ");
    for(i=0;i<number;i++){
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }





}
int fib(int n)
{
    if(n==1||n==2)
        return 1;
    return (fib(n-1)+fib(n-2));
}
