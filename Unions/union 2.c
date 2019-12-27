#include<stdio.h>
union data
{
    int x;
    float y;
    char w[10];
};
main()
{
    union data a1;
    a1.x=5;
    printf("%d\n",a1.x);
    a1.y=33.5;
    printf("%0.2f\n",a1.y);
    strcpy(a1.w,"Pranay");
    printf("%s\n",a1.w);


}
