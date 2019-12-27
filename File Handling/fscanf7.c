#include<stdio.h>
main()
{

    FILE *fp;
    int a,b,c;
    char u[5],i[5],z[5],p[5];
    fp=fopen("f1.txt","r");
    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    fscanf(fp,"%s %s %d %s %d %s %d",&u,&i,&a,&z,&b,&p,&c);
    printf("a=%d b=%d sum=%d",a,b,c);
}
