#include<stdio.h>
#include<conio.h>
int main()
{
    char* revers(char*);
    int length(char *);
    printf("%d",length("pranay"));
    printf("\n\n-------------------------------------\n\n");
    printf("\n%s",revers("Computer"));

}
char* revers(char *p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return (p);
}




int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}
