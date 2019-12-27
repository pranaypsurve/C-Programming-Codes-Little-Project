#include<stdio.h>
struct employe
{
    char emp_Name[15];
    int emp_Id;
    char emp_Branch[20];
    char emp_Dep[20];
}d[3];
main()
{
    int i,j=0,option=0;
    printf("  --Employe Management System--\n");
    while(j!=4)
    {
    printf("\n1.Add Employee\n");
    printf("2.List Employee\n");
    printf("3.Edit Employee\n");
    printf("4.Exit\n\n");
    printf("Enter Choise:");
    scanf("%d",&option);
    if(option>=0 && option<=9)
    {
    switch(option)
    {
    case 1:
        add();
        break;
    case 2:
        list();
        break;
    case 3:
        edit();
        break;
    case 4:
        exit(0);
        break;
    default :
        printf("Invalid Input try again (Only Numbers Accepted)!!\n");
        break;
    }
    }else{
    printf("Input Only No\n");
    }
    }
}

void add()
{
    int i=0,j=0;
    for(i=0;i<3;i++)
    {
        printf("\nEnter %d Employe Detail\n",i+1);
        printf("\nEnter Name:");
        fflush(stdin);
        scanf("%s",&d[i].emp_Name);
        printf("Enter Unique Id (0-9):");
        fflush(stdin);
        scanf("%d",&d[i].emp_Id);
        printf("Enter Branch:");
        scanf("%s",&d[i].emp_Branch);
        printf("Enter Dep:");
        scanf("%s",&d[i].emp_Dep);
    }
}
void list()
{
    int i,j;
    printf("\n----Employe Details-----\n");
    for(i=0;i<3;i++)
    {
        printf("\nEmploye %d Detail\n",i+1);
        printf("Employe Name :%s\n",d[i].emp_Name);
        printf("Employe Id :%d\n",d[i].emp_Id);
        printf("Employe Branch :%s\n",d[i].emp_Branch);
        printf("Employe Dep:%s\n",d[i].emp_Dep);
    }
    getch();
}
void edit()
{
    list();
    int i,j,e,ch;
    printf("\n");
    printf("Enter Employe Id to Edit\n");
    for(i=0;i<3;i++)
    {
        printf("%d.Employe Id:%d\n",i+1,d[i].emp_Id);
    }
    printf("\nEnter Employe Id:");
    scanf("%d",&e);
    if(e==1)
        {
        for(i=0;i<1;i++)
        {
        printf("1.Employe Name :%s\n",d[i].emp_Name);
        printf("2.Employe Id :%d\n",d[i].emp_Id);
        printf("3.Employe Branch :%s\n",d[i].emp_Branch);
        printf("4.Employe Dep:%s\n",d[i].emp_Dep);
        printf("\nEnter Your Choise To Edit:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("1.Employe Name :%s\n",d[i].emp_Name);
            printf("Enter New Name:");
            scanf("%s",&d[0].emp_Name);
            break;
        case 2:
            printf("2.Employe Id :%d\n",d[i].emp_Id);
            printf("Enter New Id:");
            scanf("%d",&d[1].emp_Id);
            break;
        case 3:
            printf("3.Employe Branch :%s\n",d[i].emp_Branch);
            printf("Enter New Branch:");
            scanf("%s",&d[2].emp_Branch);
            break;
        case 4:
            printf("4.Employe Dep:%s\n",d[i].emp_Dep);
            printf("Enter New Dep:");
            scanf("%s",&d[3].emp_Dep);
        }
        }
        }else if(e==2)
        {
             for(i=1;i<2;i++)
        {
        printf("1.Employe Name :%s\n",d[i].emp_Name);
        printf("2.Employe Id :%d\n",d[i].emp_Id);
        printf("3.Employe Branch :%s\n",d[i].emp_Branch);
        printf("4.Employe Dep:%s\n",d[i].emp_Dep);
        printf("\nEnter Your Choise To Edit:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("1.Employe Name :%s\n",d[i].emp_Name);
            printf("Enter New Name:");
            scanf("%s",&d[1].emp_Name);
            break;
        case 2:
            printf("2.Employe Id :%d\n",d[i].emp_Id);
            printf("Enter New Id:");
            scanf("%d",&d[1].emp_Id);
            break;
        case 3:
            printf("3.Employe Branch :%s\n",d[i].emp_Branch);

            printf("Enter New Branch:");
            scanf("%s",&d[1].emp_Branch);
            break;
        case 4:
            printf("4.Employe Dep:%s\n",d[i].emp_Dep);
            printf("Enter New Dep:");
            scanf("%s",&d[1].emp_Dep);
            break;
        }
        list();
        }
        }else if(e==3)
        {
            {
             for(i=2;i<3;i++)
        {
        printf("1.Employe Name :%s\n",d[i].emp_Name);
        printf("2.Employe Id :%d\n",d[i].emp_Id);
        printf("3.Employe Branch :%s\n",d[i].emp_Branch);
        printf("4.Employe Dep:%s\n",d[i].emp_Dep);
        printf("\nEnter Your Choise To Edit:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("1.Employe Name :%s\n",d[i].emp_Name);

            printf("Enter New Name:");
            scanf("%s",&d[2].emp_Name);

            break;
        case 2:
            printf("2.Employe Id :%d\n",d[i].emp_Id);

            printf("Enter New Id:");
            scanf("%d",&d[2].emp_Id);

            break;
        case 3:
            printf("3.Employe Branch :%s\n",d[i].emp_Branch);
            printf("Enter New Branch:");
            scanf("%s",&d[2].emp_Branch);
            break;
        case 4:
            printf("4.Employe Dep:%s\n",d[i].emp_Dep);
            printf("Enter New Dep:");
            scanf("%s",&d[2].emp_Dep);
            break;
        }
        list();
        getch();
        }
        }
        }

}
