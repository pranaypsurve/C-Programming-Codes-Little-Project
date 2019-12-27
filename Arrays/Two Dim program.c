#include<stdio.h>
#include<conio.h>
int main()
{
    //Two Dimensionoal Array
     int a[3][3],b[3][3],i,j;
     printf("Enter 9 no");
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
         printf("Enter 9 no");
     for(i=0;i<=2;i++)
        for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);

        for(i=0; i<=2; i++) {
      for(j=0;j<=2;j++) {
            printf(" %d ",a[i][j]);
           if(j==2){
            printf("\n");
         }
    }
        }printf("%d",a[0][1]+b[2][2]);
}
