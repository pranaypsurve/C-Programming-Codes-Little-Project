#include<stdio.h>
struct point
{
    int x,y;
};
int main()
{
    struct point b[10];
    b[0].x=10;
    b[0].y=20;
    b[1].x=100;
    b[1].y=1856;
    b[2].x=200;
    b[2].y=203;

    printf("%d %d",b[1].x,b[1].y);
}
