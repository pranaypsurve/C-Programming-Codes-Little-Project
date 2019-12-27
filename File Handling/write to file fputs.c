#include<stdio.h>
//#include"C:\Users\Pranay Surve\Documents\Code Block\Learn C\C Questions and Solutions\Prime or not.c"
int main()
{
    char str[10];
    printf("\n\n%d--",c3);
    //char read[100];
    FILE*p;
    int h,x;
    p=fopen("f1.txt","a+");
    if(p==NULL)
    {
        printf("File Not Found");
        exit(1);
    }
    printf("Enter 2 no:");
    scanf("%d%d",&h,&x);
    fprintf(p,"Sum of %d and %d is %d",h,x,h+x);
    fprintf(p,"\n");
    fclose(p);

    FILE *fp;
    int n,ff,c;
    char read[20];
    int i=1;
    char a[5],b[20],d[5],e[5];
    fp=fopen("f1.txt","r");
    while(fscanf(fp,"%s %s %d %s %d %s %d",&a,&b,&c,&d,&ff,&e,&n)!=EOF)
    printf("%d.%s %s %d %s %d %s %d\n",i++,a,b,c,d,ff,e,n);
  /*  while(fgets(read,2,fp)!=NULL)
    {
        printf("%s",read);
    }
*/
    fclose(fp);

}
