#include<conio.h>
#include<stdio.h>
enum month
{
    jan=1,feb,mar,apr,may,june,jul,aug,sep,oct,nov,dec
};

main()
{
    enum month m1;
    m1=jan;
    printf("%d",m1);
}
