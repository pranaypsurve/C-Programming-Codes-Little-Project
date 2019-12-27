#include<stdio.h>
struct use_Pointer
{
    int x,y,a,b;
};
void main()
{
    struct use_Pointer p1={1,2};

    printf("Enter 2 No");
    scanf("%d %d",&p1.x,&p1.y);
    struct use_Pointer *p2 =&p1;
    printf("%d %d ",p2->x,p2->);
}
