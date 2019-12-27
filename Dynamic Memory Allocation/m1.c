#include<stdio.h>
#include <stdlib.h>
main()
{
    int *ptr;
    char *temp;
    int n=0,sum=0,a=0;
    int i;
    char name;

    printf("Enter No:\n");
    scanf("%d",&n);
    ptr=malloc(n*sizeof(int));

    printf("\nSize Of Malloc is:%d\n",sizeof(*ptr));
    if(ptr==NULL)
    {
        printf("Memory Not allocated\n");
        exit(0);
    }else
    {
        printf("Memory allocated For int\n");

       // temp=ptr;
        printf("Enter %d integers Numbers:\n",n);

        for(i=0;i<n;i++)
        {
            ptr[i]=i+1;
           // sum+=*temp;
        }
        //printf("Sum is %d",sum);

        for(int i=0;i<n;i++)
        {
            printf("%d\n",ptr[i]);
        }
    }
    free(ptr);

    temp=malloc(1*sizeof(char));
    if(ptr==NULL)
    {
        printf("Memory Not allocated\n");
        exit(0);
    }else
    {
        printf("Memory allocated for char\n");
        scanf("%s",temp);
        //strcpy(temp,"Pranay surve prakash");
    }
            printf("%s\n",temp);
        free(temp);
    return 0;
}
