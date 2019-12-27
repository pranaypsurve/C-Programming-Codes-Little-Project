#include<stdio.h>
main()
//Application To print array elements using pointers and funcitions
{
    int a[5];
    input(&a);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Displaying By Display Function \n");
    display(a);
    getch();
}
int input(int *a)
{
    int i;
    for(i=0;i<5;i++)
    {

        printf("Enter a no:");
        fflush(stdin);
        scanf("%d",(a+i));
    }
}
int display(int *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("You Entered:%d \n",*(p+i));
    }
}
