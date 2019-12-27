#include<stdio.h>
union test
{
    int x;
    int y;
};
void main()
{
    union test d1;
    d1.x=65;
    union test *p=&d1;
    //printf("Enter 2 no;");
    //scanf("%d %d",&d1.x,&d1.y);
    printf("%d %c",p->x,p->y);
}
