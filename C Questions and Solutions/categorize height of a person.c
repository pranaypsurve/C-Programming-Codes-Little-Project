// 7. Write a C program to accept the height of a person in centimeter and categorize the person according to their height.
#include<stdio.h>
int main()
{
    float height;
    printf("Enter Your Height:");
    scanf("%f",&height);
    if(height<150.0)
        printf("The Person is Dwarf\n");
    else if((height>=135.0)&&(height<165.0))
        printf("The Person is average Highted");
    else if((height>=165.0)&&(height<=195.0))
        printf("The Person is Taller");\
        else
        printf("Abnormal Height");
}
