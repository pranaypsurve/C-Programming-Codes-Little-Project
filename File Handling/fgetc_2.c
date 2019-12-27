#include<stdio.h>
int main()
{
    int i;
    char ch,name[10];
    FILE *fp;
    fp=fopen("snames.txt","r+");
    if(fp==NULL)
    {
        printf("File Not Found\n");
        exit(1);
    }
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }

}
