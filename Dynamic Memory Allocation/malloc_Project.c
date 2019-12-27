#include<stdio.h>
#include<stdlib.h>
struct stud
{
    char sname[10];
    int rolno;
    float per;
}*s1,*s2;
main()
{
    int ch,i,f,g;
    printf("  ----Students Record Using Malloc ()---- \n");
    while(1)
    {
    menu();
    printf("Enter Choise:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        f=adds();
        system("cls");

        break;
    case 2:
        slist(f);
        break;
    case 3:
        exit(0);
        getch();
        break;
    default:
        printf("Try Again\n");
    }
    }
}
void menu()
{

    printf("1.Add Student\n");
    printf("2.List\n");
   // printf("3.Re-Allocate Size\n");
    printf("3.Logout\n");
}
void adds()
{
    int n=0,n2=2;
    printf("How many Record You Want To Insert:");
    scanf("%d",&n);
    s1=(struct stud*)malloc(n*sizeof(struct stud));
    printf("Size is %d\n",sizeof(s1));
    if(s1==NULL)
    {
        printf("Not Allocated\n");
        exit(0);
    }else
    {
        for(int i=0;i<n;i++)
        {
            printf("\nStudent %d Detail\n",i+1);
        printf("Enter Name:");
        fflush(stdin);
        scanf("%s",&(s1+i)->sname);
        printf("Enter Roll.no:");
        scanf("%d",&(s1+i)->rolno);
        printf("Enter Persentage:");
        scanf("%f",&(s1+i)->per);
        int r=(s1+i)->rolno;
        }
        // re-allocate Memory in program
        //printf("Want Enter More Records:(press > 1 Or Press 0 For No)");
        //scanf("%d",&n2);
        //n=2;
        //if(n2!=0)

        s1=(struct stud*)realloc(s1,n+1*sizeof(struct stud));
        if(s1==NULL)
    {
        printf("Not Allocated\n");
        exit(0);
    }else{
        for(int i=n;i<n;i++)
        {
            printf("\nStudent %d Detail\n",i+1);
        printf("Enter Name:");
        fflush(stdin);
        scanf("%s",&(s1+i)->sname);
        printf("Enter Roll.no:");
        scanf("%d",&(s1+i)->rolno);
        printf("Enter Persentage:");
        scanf("%f",&(s1+i)->per);
        }
    }
    return n;
    free(s1);
    }
}
void slist(int n)
{
    printf("\n----Students Records----\n");
   /* for(int i=0;i<n;i++)
    {
    printf("\nName :%s\n",s1[i].sname);
    printf("Roll.No :%d\n",s1[i].rolno);
    printf("Persentage :%0.2f\n\n",s1[i].per);
    }*/
    for(int i=0;i<n;i++)
    {
    printf("\nName :%s\n",s1[i].sname);
    printf("Roll.No :%d\n",s1[i].rolno);
    printf("Persentage :%0.2f\n\n",s1[i].per);
    }


    printf("--Press Any Key To Show Menu--\n\n");
    getch();
    //re();
}
