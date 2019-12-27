//
#include<stdio.h>
#include<conio.h>

int main()
{
    int a[15]={34,34,45,65,78,56,54,78,34,67},sum=0,i;
    /*printf("Enter 10 no");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);*/
    for(i=0;i<=9;i++)
        sum=sum+a[i];
    float avg=sum/10.0;
    printf("%f\n",avg);
    printf("%d",a[14]); // automatic garbage value
}
