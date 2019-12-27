#include<stdio.h>
struct cust_detail
{
    char name[30];
    int cust_id;
    int ac_no;
    int bal;
    int de;
}d={"",0,0};
struct cust_detail *p;
int main()
{

    p=&d;

    printf("Enter Name:");
    scanf("%s",&d.name);
    printf("Enter Id:");
    scanf("%d",&d.cust_id);
    printf("Enter Acno:");
    scanf("%d",&d.ac_no);
    printf("Enter Diposit Amount:");
    scanf("%d",&d.bal);
    //input();
    display();
    withdra();
    //bal();
     display();
    getch();

}
void input(struct cust_detail y)
{
    printf("Enter Name:");
    scanf("%s",&p->name);
    printf("Enter Id:");
    scanf("%d",&p->cust_id);
    printf("Enter Acno:");
    scanf("%d",&p->ac_no);
    printf("Enter Diposit Amount:");
    scanf("%d",&p->bal);
}
void display(struct cust_detail w)
{
    printf("Name :%s\n",d.name);
    printf("ID :%d\n",p->cust_id);
    printf("Ac :%d\n",p->ac_no);
    //p->bal=p->bal-5;
    printf("%d\n",p->bal);
   // p->de=p->bal;
//    printf("%d\n",p->de);
}
void bal()
{
    printf("%d",p->de);
}
void withdra(struct cust_detail g)
{
    int b;
    printf("Enter Amount To Withdraw");
    scanf("%d",&b);
    p->bal=p->bal-b;
    printf("Balance is:%d\n",p->bal);
}
