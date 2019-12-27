#include<stdio.h>
#include<stdlib.h>
struct
{
    int bookid;
    float price;
    char btitle[500];
}*book,*p=&book;
main()
{
    fun();
    //free(book);
    //free(book);
    getch();
}
void fun()
{
    int a,i,n2;
    printf("  ----Save Books Records----\n");
    //while(a!=0){
    printf("How Many Books Records Want To Store:");
    scanf("%d",&a);
    book=malloc(a*sizeof(int));
    if(book==NULL)
    {
        printf("Failed\n");
        exit(1);
    }
    //Storing Records---------
    for(i=0;i<a;i++)
    {
        printf("\nEnter Record %d\n",i+1);
        printf("Enter Book ID :");
        fflush(stdin);
        scanf("%d",&book[i].bookid);
        printf("Enter Book Title :");
        scanf("%s",&book[i].btitle);
        printf("Enter Book Price :");
        scanf("%f",&book[i].price);
    }
    //For Loop Ends----------------------

    //Display Info---------
        for(i=0;i<a;i++)
        {
            printf("\nRecords %d\n",i+1);
            printf("Book Id:%d\n",book[i].bookid);
            printf("Book Name:%s\n",book[i].btitle);
            printf("Book Price:%0.2f\n",book[i].price);
        }
        int f;
        printf("\nWant To Enter More(1='Yes'/2='No'):");
        scanf("%d",&f);
        if(f==1)
        {
            re(a); //actual args

        }
        else{
                printf("Press Any Key To Exit\n");
            getch();
            exit(0);
}
return a;
}
void re(int a) //formal args
{
    int n2,i;
        printf("Your Size Extended Enter Max No. To Store More Records:");
        scanf("%d",&n2);
        book=realloc(book,n2*sizeof(int));
        if(book==NULL)
        {
            printf("Failed\n");
            exit(1);
        }
        //re-allocate
        for(i=a;i<a+n2;i++)
        {
            printf("\nEnter Record %d\n",i+a);
        printf("Enter Book ID :");
        scanf("%d",&book[i].bookid);
        printf("Enter Book Title :");
        scanf("%s",&book[i].btitle);
        printf("Enter Book Price :");
        scanf("%f",&book[i].price);
        }
        printf("Records Saved\n\n\a");
        int b;
        printf("To Display Records Press 1 or Exit = 2\n");
        scanf("%d",&b);
        if(b==1)
        {
        int s=a+n2;
        for(i=0;i<s;i++)
        {
            printf("\nRecords %d\n",i+1);
            printf("Book Id:%d\n",book[i].bookid);
            printf("Book Name:%s\n",book[i].btitle);
            printf("Book Price:%0.2f\n",book[i].price);
        }
        }else
        {
            printf("\nPress Any Key To Exit !!\n");
        getch();
        exit(1);
        }
        printf("\nPress Any Key To Exit\n");
        getch();
        return n2;
}
//--------------------------Example Re-Allocate--------------------------

  //example of relloc ()
    /*int *p,*ptr,i,j;
    p=malloc(2*sizeof(int));
    *p=10;
    *(p+1)=20;
    for(i=0;i<2;i++)
    {
        printf("%d\n",*p+i);
    }
    //Re-allocate
    ptr=realloc(p,3*sizeof(int));
    *(ptr+2)=30;
    for(i=0;i<3;i++)
    {
        printf("%d\n",*(ptr+i));
    }*/
    //ends------------------------

//--------------------------Example Re-Allocate--------------------------
