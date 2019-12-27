//4. Write a program in C to check a given number is even or odd using the function
#include<stdio.h>
int main()
{
    int s,g;
    printf("Enter Number");
    scanf("%d",&s);
    g=oddeven(s);
    if(oddeven(s))
        printf("Odd");
    else
        printf("even");

}
 int oddeven(int s)
{
 /*   if(s%2==0)
        printf("Number is even");

    else
        printf("Number is odd");
*/
return (s&1);
}
