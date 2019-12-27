// 12. Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.
#include<stdio.h>
#include<conio.h>
int main()
{
    int roll,phy,chim,maths,marks;
    char name[10];
    printf("Enter Your Name:");
    scanf("%s",&name);
    printf("\nEnter Your Roll no.\n");
    scanf("%d",&roll);
    printf("Enter Phy Subject marks");
    scanf("%d",&phy);
    printf("Enter chim Subject marks");
    scanf("%d",&chim);
    printf("Enter math Subject marks");
    scanf("%d",&maths);
    marks=phy+chim+maths;
    printf("\nTotal marks %d \n",marks);
    float per=marks/3.0;
    if(per>=60)
        printf("Frist Class");
    else if(per<60&&per>48)
          printf("Second Class");
    else if(per<48 && per>=36)
        printf("Pass");
    else
        printf("Fail");
}
