#include<stdio.h>
main()
{
    int a[5],*p;
    p=&a;
    printf("  Program To Print 5 Numbers Using Pointer\n\n");

    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter 5 Numbers:");
        scanf("%d",(p+i));
    }
    printf("You Entered:\n");
    for(i=0;i<5;i++)
    {
        printf("\n%d",*(a+i));

    }
    getch();
}
void input(int p)
{
    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%d\n",(p+i));
    }
}
void  display(int o)
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("\n%d",o+i);
    }
    getch();
}
