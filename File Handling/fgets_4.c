#include<stdio.h>
main()
{
    int i;
    char read[20];
    FILE *fp;
    fp=fopen("snames.txt","r");
    if(fp==NULL)
    {
        exit(1);
    }
    while(fgets(read,6,fp)!=NULL)
    {
        printf("%s",read);
    }
        fclose(fp);
}

