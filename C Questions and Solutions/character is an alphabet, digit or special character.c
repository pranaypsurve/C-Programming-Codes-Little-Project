// character is an alphabet, digit or special character

#include<stdio.h>
#include<conio.h>
int main()
{
    char check;
    printf("Input a character:");
    scanf("%s",&check);
    if((check>='a'&& check<='z')||(check>='A'&& check<='Z'))
        printf("Alphabet\n");
    else if(check>='0'&& check<='9')
    {
        printf("Digits");
    }
    else
    {
        printf("Special Charactr");
    }
}
