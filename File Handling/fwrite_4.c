#include<stdio.h>

struct book
{
    int bookid;
    char title[20];
    float price;

};
int main()
{
    struct book b1;

    FILE *fp;
    fp=fopen("end.txt","wb");
    if(fp==NULL)
    {
        exit(1);
    }
    printf("Enter BookId:");
    scanf("%d",&b1.bookid);
    printf("Enter Title:");
    //fflush(stdin);
    scanf("%s",&b1.title);
    printf("Enter Price");
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}

