#include<conio.h>
#include<stdio.h>
enum boolean
{
    false,true
};
enum boolean isEven(int x)
{
    if(x%2==0)
        return true;
    else
        return false;
}

main()
{
    int n;
    enum boolean results;

    printf("Enter Number");
    scanf("%d",&n);
    results=isEven(n);
    if(results==true)
    printf("Even Number");
    else
        printf("Odd Number");

}

