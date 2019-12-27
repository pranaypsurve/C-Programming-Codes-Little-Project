#include<stdio.h>
int main()
{
    FILE *f;
    int h,x;
    f=fopen("G:\saved.txt","a");
    if(f == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    printf("Enter 2 no:");
    scanf("%d%d",&h,&x);
    fprintf(f,"Sum of %d and %d is %d",h,x,h+x);
    fprintf(f,"\n");
    fclose(f);

    FILE *fp;
    int a,b,c;
    char u[5],i[5],z[5],p[5];
    fp=fopen("G:\saved.txt","r");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    printf("Printing All Records From File\n\n");
    while(fscanf(fp,"%s %s %d %s %d %s %d",&u,&i,&a,&z,&b,&p,&c)!=EOF)
    printf("a=%d b=%d sum=%d\n",a,b,c);
    fclose(fp);
    getch();
}
