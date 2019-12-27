#include"stdio.h"
main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("f1.txt","w");
    printf("Enter 2 no:");
char n[30];
    scanf("%d %d",&a,&b);
    printf("Enter Your Name:");
    scanf("%s",&n);
    fprintf(fp,"%s\nsum of %d and %d is %d",n,a,b,a+b);
    fclose(fp);

}
