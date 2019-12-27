#include<stdio.h>
int main()
{
    char readed[2];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("File not Found");
        exit(1);
    }
    while(fgets(readed,2,fp)!=NULL)
    {
        printf("%s",readed);
    }
    fclose(fp);
}
