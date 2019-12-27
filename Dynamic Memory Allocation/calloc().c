#include<stdio.h>
int main()
{
    int *ptr;
    int i,n=5;
    ptr=calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Not Geted");
        exit(0);
    }
    else
    {
        printf("Memory Geted\n");
        //geting element
        for(i=0;i<n;++i)
        {
            ptr[i]=i+1;
        }
        for(i=0;i<n;++i)
            printf("%d,",ptr[i]);
    }
}
