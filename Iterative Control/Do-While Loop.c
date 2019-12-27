#include<stdio.h>

int main()
{
    //print a name 10 times
    int i=1;
    do{
        printf("pranay\n");
        i++;
    }while(i<=10);

    //printing table in do while loop
    int a=2,b=1;
    do
    {
        printf("3 * %d = %d\n",b,b*3);
        b++;
    }while(b<=10);

    //print table by user input

    int g,h=1;
    printf("enter no");
        scanf("%d",&g);
    do{
        printf("%d*%d=%d\n",g,h,h*g);
        h++;
    }while(h<=10);
}
