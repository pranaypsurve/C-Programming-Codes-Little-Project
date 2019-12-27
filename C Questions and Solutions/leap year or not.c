// 4. Write a C program to find whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int check_Leap_yr;
    printf("Enter Year To Check Leap Yearb or Not ");
    scanf("%d",&check_Leap_yr);
    if((check_Leap_yr%400)==0)
        printf("%d is Leap year",check_Leap_yr);
    else if((check_Leap_yr%100)==0)
        printf("%d is not  leap yr by 100",check_Leap_yr);
    else if((check_Leap_yr%4)==0)
        printf("%d is leap yr by 4",check_Leap_yr);
    else
        printf("%d is not a leap yr \"else\"",check_Leap_yr);
        getch();
}
