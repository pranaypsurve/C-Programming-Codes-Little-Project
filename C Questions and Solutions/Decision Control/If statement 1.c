#include<stdio.h>
int main()
{
    //If Statement
    printf("hello");
    if(4<3){
        printf("pranay\n");
    }
    int x;
    printf("\nenter 2 no\n");
    scanf("%d",&x);
    if(x>0){
        printf("positive number");
    }
    if(x<=0){
        printf("non positive number");
    }

    //If else Statements

    int y;
     printf("enter 2 no\n");
    scanf("%d",&y);
    if(x>0)
        printf("positive number");
    else
        printf("non positive");

        //conditional statememnt

        int q,w;
        printf("\nenter 2 no\n");
        scanf("%d %d",&q,&w);
        q>w?printf("q is big"):printf("w is big");

        int u,i;
        printf("\nenter 2 no\n");
        scanf("%d %d",&u,&i);
       // int max=u>i?u:i;
       // printf("greater no is : %d",max);
       printf("greater no is:%d",u>i?u:i);

}
