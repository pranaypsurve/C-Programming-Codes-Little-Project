#include "stdio.h"

int main()
{
    int i,j;
    int alice=0;
    int bob=0;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
         scanf("%d",&b[i]);
    }
     for(i=0;i<3;i++)
     {
         if(a[i]>b[i])alice++;
         if(a[i]<b[i])bob++;
     }
     printf("%d %d\n", alice, bob);
}
