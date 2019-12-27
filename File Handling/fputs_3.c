#include<stdio.h>
main()
{
    int i;
    char name[10];
    char read[50];
    FILE *fp;
    fp=fopen("snames.txt","r+");
    if(fp==NULL)
    {
        exit(1);
    }
    printf("Enter Name:");
    gets(&name);
    fputs(&name,fp);
    fputs(" ",fp);
    fclose(fp);
    FILE *p;
    p=fopen("snames.txt","r");
    if(p==NULL)
    {
        exit(1);
    }
    while(fgets(read,50,p)!=NULL)
          {
                printf("%s",read);
          }
        fclose(p);
}
