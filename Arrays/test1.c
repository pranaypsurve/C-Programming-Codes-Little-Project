#include<stdio.h>
main()
{
    int a[4][5],i,sub,n,j,add[4][5];
    int d,v;
    int sum=0;
    int b;
    printf("\n\tApplication To Store Students Marks\n\n");
//    while(b!=5){
    printf("Enter Marks Of Students\n");
        for(j=0;j<4;j++)
        {
            printf("Enter Student %d Marks:\n",j);
            for(i=0;i<5;i++)
                {
                    printf("Subject %d :",i);
                    scanf("%d",&a[j][i]);
                }
        }
            printf("Marks Are:\n");
                for(j=0;j<4;j++)
                {
                    printf("Student %d\n",j);
                        for(i=0;i<5;i++)
                    {
                        printf("Marks of Students Area %d \n",a[j][i]);
                    }
        printf("\n");
       }
    printf("Example Student 1 = '0'\n");
    printf("Example Student 2 = '1'\n");
    printf("Example Student 3 = '2'\n");
    printf("Example Student 4 = '3'\n");
    printf("Min 0 and Max 4\n , but \n");
    printf("If You Have To Print Only One Record Than Enter Student No and enter,'One Upper value Of Student No'\n\n");
    printf("Enter Student No. Starts From(*0 - But Number Should < Than One Upper Number): \n\n");\
    for(j=0;j<4;j++)
    {
    printf("Total No Of students:%d\n",j);
    }
    printf("Enter Student No:");
    scanf("%d",&d);
    printf("\nEnter Greater Than %d ('Or Max Student No To Print All Records') :\n",d,&v);
    scanf("%d",&v);
        getch();
    if(d<v&v<=4)
    {
        //printf("Invalid Values\n");

        for(j=d;j<=v-1;j++)
        {
       for(i=0;i<=4;i++)
        {
           sum+=a[j][i];
        }
        printf("**************************\n");
        printf("Student No.:%d\n",j);
        printf("Total Marks : %d\n",sum);
        sum/=5;
        printf("Avg is : %d\n",sum);
        printf("**************************\n");
        }
        getch();
        //printf("Want To Exit Press 5\n");
       // scanf("%d",&b);
       // b=getch();
      // printf("Clear Screen Pree Any Key\n");
    }else if(v>d)
    {
        printf("Cross Limit\n");
    }
    else if(v<=d||d>=v)
    {
        printf("Invalid Try Again\n");
        getch();
    }
}
