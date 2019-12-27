#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\nPrint Element Of An Array\n");
    printf("--------------------------------------");
    int a[10],i,j;
     printf("Input 10 elements in the array :\n");
    for(i=0;i<10;i++)
    {
    printf("\nEnter Element: %d \n",i);
    scanf("%d",&a[i]);
    }
    printf("\nElement In An Arrays Are:\n");
    for(i=0;i<10;i++)
        printf(" %d ",a[i]);
}
