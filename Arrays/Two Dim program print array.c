
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\nPrint Element Of An Array\n");
    printf("--------------------------------------\n");
    int a[3][2],b[3][2],c[3][2],i,j;
    printf("Input 10 elements in the array :\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
        printf("Enter 2 6 nos:");
        for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        scanf("%d",&b[i][j]);


        for(i=0;i<3;i++)
        {
        for(j=0;j<2;j++)
        {
             c[3][2]=a[i][j]*b[i][j];
            printf("%d ",c[3][2]);
        }
        printf("\n");
        }





/*    printf("\nElement In An Arrays Are:\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        printf("Array :[%d] [%d] = %d\n",i,j,a[i][j]);

*/



}
