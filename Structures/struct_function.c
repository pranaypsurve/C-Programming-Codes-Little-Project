#include<stdio.h>
struct employe
{
    char emp_Name[15];
    int emp_Id;
    char emp_Branch[20];
    char emp_Dep[20];
}d,*p=&d;
main()
{

    detail();
    display();
    edit();
    display();
    ipointer();
}
void ipointer()
{
    printf("\n\aDisplay Using Pointer\n");
    printf("\nEmploye Name %s\n",p->emp_Name);
    printf("Employe Id %d\n",p->emp_Id);
    printf("Employe Branch %s\n",p->emp_Branch);
    printf("Employe Department %s\n",p->emp_Dep);
}
void detail()
{
    //struct employe d;
    printf("Enter Employe Name:");
    fflush(stdin);
    gets(d.emp_Name);
    printf("Enter Employe Id:");
    scanf("%d",&d.emp_Id);
    printf("Enter Employe Branch:");
    scanf("%s",&d.emp_Branch);
    printf("Enter Employe Department:");
    scanf("%s",&d.emp_Dep);
    //return (d);
}
void display()
{
    printf("\nDetails\n");
    printf("\nEmploye Name %s\n",d.emp_Name);
    printf("Employe Id %d\n",d.emp_Id);
    printf("Employe Branch %s\n",d.emp_Branch);
    printf("Employe Department %s\n",d.emp_Dep);
}

void edit()
{
    //struct employe d;
    printf("\n--Edit Records--\n");
    printf("Enter Employe Name:");
    fflush(stdin);
    gets(d.emp_Name);
    printf("Enter Employe Id:");
    scanf("%d",&d.emp_Id);
    printf("Enter Employe Branch:");
    scanf("%s",&d.emp_Branch);
    printf("Enter Employe Department:");
    fflush(stdin);
    scanf("%s",&d.emp_Dep);
    //return (d);
}
