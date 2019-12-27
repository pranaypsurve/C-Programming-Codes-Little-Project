
//
#include<stdio.h>
#include<conio.h>
int main()
{
    int students[10],i,count=1;
    for(i=0;i<=9;i++)
    {
    printf("Enter Students %d: ",count++);
    scanf("%d",&students[i]);
    }
    for(i=0;i<=9;i++)
        printf("%d ",students[i]);
}
