#include<stdio.h>
int main()
{
    int *p,*p1;
    int n;
    n=4;
    printf("Element is %d \n",n);
    //dyanamic allocted memory using malloc()
    p=(int*)malloc(n*sizeof(int));
    p1=(int *)calloc(n,sizeof(int));
    if(p==NULL||p1==NULL)
    {
        printf("Meory Not Get\n");
        exit(0);
    }
    else
    {
        printf("Memory get\n");
        //free the memory
        free(p);
        printf("Ma;lloc() freed\n");

        free(p1);
        printf("calloc freed\n");
    }
}
