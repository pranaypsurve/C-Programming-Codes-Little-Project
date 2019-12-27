#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,inst[2][2][3][2],sel,cal;
    printf("\n       Institute Management System\n");
    for(i=0;i<2;i++){
    printf("Institute %d:\n",i+1);
    for(j=0;j<2;j++)
    {
        printf("Class %d:\n",j+1);
        for(k=0;k<3;k++)
        {
            printf("Student %d\n",k+1);
            for(l=0;l<2;l++)
            {
            printf("Enter Subject %d Marks:\n",l+1);
            scanf("%d",&inst[i][j][k][l]);
            }
        }
    }
    }
    int b;
    while(sel!=5)
    {
        for(i=0;i<2;i++)
        {
            printf("%d.Institute are :(Use This No. To Access Instutite >>) %d\n\a",i+1,i);

        }
         printf("You Can Enter press 5 To Exit !!\n");
    printf("Select Institute:(Less Than <2)\n");
    scanf("%d",&sel);
    if(sel>=0&&sel<2)
    {
    // Institute 1 code
    if(sel==0)
    {
        for(i=0;i<1;i++)
       {
        for(j=0;j<2;j++) //classes
        {
            printf("class %d\n",j);
        }
        printf("Select Class:");
        scanf("%d",&cal);
        if(cal==0)
        {
            for(j=0;j<1;j++)
        {
            printf("Class %d\n",j);
            for(k=0;k<3;k++) //students
            {
                printf("Student %d\n",k);
                for(l=0;l<2;l++) //marks
                {
                printf("Students Marks - %d\n",inst[i][j][k][l]);
            }
        }
        printf("\n");
        }
        }else if(cal==1)         //Class 1 Instructions ---Starts----
        {
           // for(i=0;i<2;i++)
            //{
            for(j=1;j<2;j++)   //j is No of Classes
        {
            printf("Class %d\n",j);
            for(k=0;k<3;k++) // No of students
            {
                printf("Student %d\n",k);
                for(l=0;l<2;l++) //marks
                {
                printf("Students Marks - %d\n",inst[0][j][k][l]);
            }
        }
        printf("\n");
        }
         //Institute 2 Code ----Starts---
        }else
        {
            printf("Try Again!\n");
        }
        }
        }else if(sel==1)
        {
            for(i=1;i<2;i++)
        {
        for(j=0;j<2;j++) //classes
        {
            printf("class %d\n",j);
        }
        printf("Select Class To View Students Marks:");
        scanf("%d",&cal);
        //Class 0 Instructions ---Starts----
        if(cal==0)
        {
            for(j=0;j<1;j++)
        {
            printf("Class %d\n",j);
            for(k=0;k<3;k++) //students
            {
                printf("Student %d\n",k);
                for(l=0;l<2;l++) //marks
                {
                printf("Students Marks - %d\n",inst[i][j][k][l]);
            }
        }printf("\n");
        }
        }else if(cal==1)    //Class 1 Instructions ---Starts----
        {
            for(i=1;i<2;i++)
            {
            for(j=1;j<2;j++)
        {
            printf("Class %d\n",j);
            for(k=0;k<3;k++) //students
            {
                printf("Student %d\n",k);
                for(l=0;l<2;l++) //marks
                {
                printf("Students Marks - %d\n",inst[i][j][k][l]);
            }
            }
            printf("\n");
        }
            }
        }
    }

            //Institute 2 Code ----Ends----
    }
        }else
        {
            printf("    Try Again\n\n");
        }

}
    }




