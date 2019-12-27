#include<stdio.h>
int main()
{
    int *p;
    int n;
    n=5;
    printf("Element is %d \n",n);
    //dyanamic allocted memory using malloc()
    p=malloc(n*sizeof(int));
    if(p==NULL)
    {
        printf("Memory Not allocated\n");
        exit(0);
    }
    else
    {
        printf("Memory Allocated\n");
int i;
        for(i=0;i<n;++i)
{
    p[i]=i+1;
}
    //get array element

        for(i=0;i<n;++i)
            printf(" %d ",p[i]);
    }
    getch();
}

