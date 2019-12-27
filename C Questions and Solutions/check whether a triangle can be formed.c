// 15. Write a C program to check whether a triangle can be formed by the given value for the angles
#include<stdio.h>
#include<conio.h>
int main()
{
    int sidea,sideb,sidec;
    printf("enter Angles:");
    scanf("%d%d%d",&sidea,&sideb,&sidec);
    int acurate=sidea+sideb+sidec;
    if(acurate==180)
        printf("Triangle can Be Formed");
    else
        printf("Triangle Connot Be Formed");

}
