#include<stdio.h>
int main()
{
int i;
FILE *fp;
char s[20];
fp=fopen("f1.txt","w");
if(fp==NULL){
    printf("File Not Open");
    exit(1);
    }
    printf("Enter Your Name:");
    gets(s);
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);

}
