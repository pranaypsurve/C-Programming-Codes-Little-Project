#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book input()
{
    struct book b1;
    printf("Enter Bookid , Title , Price");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    scanf("%s",&b1.title);
    scanf("%f",&b1.price);
    return b1;
}
void display(struct book p)
{
    printf("\n%d %s %f",p.bookid,p.title,p.price);
}
void p(struct book e)
{
        printf("%d",e.price);
}
void main()
{
    struct book q;
    q=input();
    display(q);
}
