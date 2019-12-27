#include<stdio.h>
#include<conio.h>

main()
{
    int s;
    int add(void);
    s=add();
    printf("%d",s);

}

int add()
{
    int a,b,c;
    printf("Enter number");
    scanf("%d%d",&a,&b);
    //c=a+b;
    return (a+b);
}
