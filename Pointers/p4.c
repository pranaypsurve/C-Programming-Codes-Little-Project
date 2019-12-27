#include<stdio.h>
main()
{
    int a=5,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    p=p+5;
    printf("Address of a=%d\n",&a);
    printf("Address of b=%d\n\n",&b);
    printf("Addres of a %d Goes in Pointer p %d\n",&a,p);
    printf("Pinter P Value p=%d\n\n",p);
    printf("Addres of b %d Goes in Pointer q %d\n",&b,q);
    printf("Pinter Q Value q=%d\n\n",q);
    printf("Size of Pointer %d\n",sizeof(*p));

    int i=p-q;

    printf("p-%d and q=%d : p-q= %d\n",p,q,i);

    printf("Total Diff is 24,but 24/4=6\n");
    printf("int size is 4 byte(24/4)\n");
    getch();
}
