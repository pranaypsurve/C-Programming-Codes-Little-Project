#include<stdio.h>
#include<stdlib.h>

main()
{
    int *re,*pt;
    int i,j=5,n=2;
    pt=malloc(2*sizeof(int));
    re=calloc(j,sizeof(int));
    if(re==NULL||pt==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }else
    {
        printf("Memory Allocated\n");
        for(i=0;i<j;i++)
        {
            re[i]=i+1;
            printf("You entered No.:%d\n",re[i]);
        }
        free(pt);
        printf("Pt memory freed!\n");
        printf("\n\n");

        j=15;
        re=realloc(re,j*sizeof(int));
        for(i=0;i<j;i++)
        {
            re[i]=i+1;
            printf("New:%d\n",re[i]);
        }
        free(re);
        printf("Memory Freed!\n");


    }
}
