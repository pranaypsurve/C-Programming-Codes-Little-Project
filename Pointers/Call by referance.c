#include<stdio.h>
#include<conio.h>
int main()
{
    //To swap 2 nos:

    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("A=%d And B=%d",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
