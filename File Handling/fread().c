#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
int buffer[100];
main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("myfile.txt","rb");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    while(fread(&b1,sizeof(b1),23,fp)>0)

        {
            printf("%d %s %0.2f",b1.bookid,b1.title,b1.price);
        }
}
