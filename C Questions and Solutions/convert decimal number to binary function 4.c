// 6. Write a program in C to convert decimal number to binary number using the function
#include<stdio.h>
long tobin(int);
int main()
{
    int dno;
    long bno;
    printf("Enter Decimal no");
    scanf("%d",&dno);
    bno=tobin(dno);
    printf("%ld",bno);
}
long tobin(int dno)
{
    long bno=0,rem,f=1;
    while(dno!=0)
    {
        rem=dno%2;
        bno=bno+rem*f;
        f=f*10;
        dno=dno/2;
    }
        return bno;
}
