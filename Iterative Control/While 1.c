#include<stdio.h>

int main()
{
    //print 2table
    int i=1;
    while(i<=10)  //condition
    {
        printf("2 * %d = %d\n",i,i*2);
        //printf("3 * %d = %d\n",i,i*3);
        i++;   //flow
    }

    int a,b,c=1;
    printf("enter number to print table:");
    scanf("%d",&a);
    while(c<=10)
    {
        printf("%d*%d=%d\n",a,c,c*a);
        c++;
    }
}
