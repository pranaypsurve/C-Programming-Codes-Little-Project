#include<stdio.h>
main()
{
    int i;
    char name[20];
    FILE *fp;
    fp=fopen("snames.txt","w");
    if(fp==NULL)
    {
        exit(1);
    }
    printf("Enter Name To Save:");
    gets(&name);
    while(strlen(name)>0)
    {
        fputs(name,fp);
        //fputs("\n",fp);
    }
    fclose(fp);
}
