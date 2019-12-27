#include<stdio.h>
struct employe
{
    char emp_Name[15];
    int emp_Id;
    char emp_Branch[20];
    char emp_Dep[20];
};
main()
{
    printf("  --Employe Management System--\n");
    struct employe d[2];
    int i=0,j=0;
    for(i=0;i<2;i++)
    {
        printf("\nEnter %d Employe Detail\n",i+1);
        printf("\nEnter Name:");
        scanf("%s",&d[i].emp_Name);
        fflush(stdin);
        printf("Enter Id(0-9):");
        scanf("%d",&d[i].emp_Id);
        printf("Enter Branch:");
        scanf("%s",&d[i].emp_Branch);
        printf("Enter Dep:");
        scanf("%s",&d[i].emp_Dep);
    }
    //check id
    for(i=1;i<2;i++)
    {
        if(d[0].emp_Id == d[i].emp_Id)

          //if(d[0].emp_Id == d[1].emp_Id)
    {
        printf("\nEmployee Id is Equal\n");
    }
    else{
        printf("\nGood Employee Id is Not Equal\n");
    }
    }
    printf("\n----Employe Details-----\n");
    for(i=0;i<2;i++)
    {
        printf("\nEmploye %d Detail\n",i+1);
        printf("Employe Name :%s\n",d[i].emp_Name);
        printf("Employe Id :%d\n",d[i].emp_Id);
        printf("Employe Branch :%s\n",d[i].emp_Branch);
        printf("Employe Dep:%s\n",d[i].emp_Dep);
    }
    getch();
}
