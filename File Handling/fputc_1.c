#include<stdio.h>
main()
{
    int i;
    char ch;
    FILE *fp;
    char name[30];
    fp=fopen("snames.txt","w");
    if(fp==NULL)
    {
        printf("File Not Exits\n");
        exit(1);
    }
    printf("Enter a String:");
    gets(&name);
    for(i=0;i<strlen(name);i++)
    {
        fputc(name[i],fp);
        //fputc("\n",fp);
    }
}
