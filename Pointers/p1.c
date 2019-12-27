#include<stdio.h>

//access array elements using array and print through pointer
main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("Enter No:");
        scanf("%d",&a[i]); //converts to *(a+i)
    }
    printf("You Entered No:\n");
    for(int i=0;i<5;i++)
    {
    printf("%d\n",*(a+i));
    }
}
