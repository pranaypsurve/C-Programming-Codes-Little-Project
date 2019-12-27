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
    printf("  --Save Book Records Into File In Binary Code--\n\n");
    FILE *fp;
    fp=fopen("G:\\book.dat","ab");
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
    printf("Records Inserted Sucessfully\n\n");
    fclose(fp);
    FILE *p;
    p=fopen("G:\\book.dat","rb");
    if(p==NULL)
    {
        exit(1);
    }
    while(fread(&b1,sizeof(b1),1,p)>0)
    {
        printf("*************\n");
        printf("%d %s %0.2f\n",b1.bookid,b1.title,b1.price);
    }
    printf("Press Key To Exit\n");
    fclose(p);
    getch();
}
