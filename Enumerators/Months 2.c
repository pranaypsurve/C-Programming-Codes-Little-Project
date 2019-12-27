#include<conio.h>
#include<stdio.h>
enum month
{
    jan=1,feb,mar,apr,may,june,jul,aug,sep,oct,nov,dec
};

main()
{
    int i;
    for(i=jan;i<=dec;i++)
        printf("%d ",i);
    return 0;
}

