#include<stdio.h>
main()
{
    /*  // predifined
    char p[20];
    printf("enter a string:");
    gets(p);
    int p1=strrev(p);
    printf("%s",p1); */

    char p[20];
    int l,i;
    printf("Enter string");
    gets(p);
    for(l=0;p[l];l++);
    for(i=0;i<l/2;i++)
    {
       int ch;
       ch=p[i];
       p[i]=p[l-1-i];
       p[l-1-i]=ch;
    }
    printf("Reverse is %s",p);

}
