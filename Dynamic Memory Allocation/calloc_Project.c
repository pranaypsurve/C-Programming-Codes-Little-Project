#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* p;
    int n,i,sum=0;
    printf("How many no. Do u want to sum:");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    if(p==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }else
    {
        printf("Memory Allocated\n");
        for(i=0;i<n;i++)
        {
          printf("Enter %d Numbers:",i+1);
          scanf("%d",(p+i));
        }
        for(i=0;i<n;i++)
        {
            sum+=*p;
        }
        printf("Sum:%d\n",sum);

        for(i=0;i<n;i++)
        {
          printf("You entered No.: %d\n",*p);
        }
        /*for(i=0;i<n;i++)
        {
            p[i]=i+1;
            printf("\nYou entered No.:%d\n",p[i]);
        }*/

    }
    free(p);
    printf("Memory Relased !\n");
}
