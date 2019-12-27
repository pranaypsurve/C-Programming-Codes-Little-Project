#include<stdio.h>
main()
{
    int *p,n,i;
    p=calloc(4,sizeof(int));
    if(p==NULL)
    {
        printf("Not");
        exit(1);
    }else
    {
        printf("Allocated\n");
         for(i = 0; i < 4; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", p+i);
    }
    printf("\nIncreasing the size of the array by 5 elements ...\n ");
    p=realloc(p,9*sizeof(int));
    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1); // exit the program
    }

        printf("\nEnter 5 more integers\n\n");
    for(i = 4; i < 9; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", p+i);

    }
    for(i=0;i<9;i++)
    {
        printf("%d\n",*p+i);
    }
}
}
