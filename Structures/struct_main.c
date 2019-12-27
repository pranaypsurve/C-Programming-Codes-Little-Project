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
    struct employe emp_detail;
    printf("Enter Employe Name:");
    gets(&emp_detail.emp_Name);
    //scanf("%s",&emp_detail.emp_Name);
    printf("Enter Employe Id:");
    scanf("%d",&emp_detail.emp_Id);
    printf("Enter Employe Branch:");
    scanf("%s",&emp_detail.emp_Branch);
    printf("Enter Employe Department:");
    fflush(stdin);
    scanf("%s",&emp_detail.emp_Dep);

    //Display Details Of Employe in main
    printf("\nEmploye Name %s\n",emp_detail.emp_Name);
    printf("Employe Id %d\n",emp_detail.emp_Id);
    printf("Employe Branch %s\n",emp_detail.emp_Branch);
    printf("Employe Department %s\n",emp_detail.emp_Dep);
}
