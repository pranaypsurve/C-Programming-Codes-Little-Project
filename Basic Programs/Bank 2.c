#include<stdio.h>
#include<conio.h>
#define t {0,0," ",0}
struct user
{
    int depo;
    int acno;
    char name[30];
    //double mob;
    int bal;
    int wit;
};
struct user i={0};
double mob[9];
int depo1;
int bal1;
int wit;


//int d.depo=0;
int main()
{
    int ch;
    system("cls");
    while(ch!=6){
    printf("1.Create Account\n");
    printf("2.Display\n");
    printf("3.Deposit\n");
    printf("4.Withdraw\n");
    printf("5.Do Transcation\n");
    printf("6.Logout\n");
    printf("Enter Choise:");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        makeac();
        break;
    case 2:
        dis(i);
        break;
    case 3:
        depo(i);
        break;
    case 4:
        withdra(i);
        break;
    case 5:
        tran(i);
        break;
    }
    }
}
void makeac()
{
    printf("Enter Account Number      :");
    scanf("%d",&i.acno);
   // strcpy(input.acc,&input.acc);
    printf("Enter Name                :");
    scanf("%s",&i.name);
   /* printf("Enter Your mobile no      :");
    scanf("%d",&mob);    */
    printf("Enter Amt To Deposit      :");
    scanf("%d",&depo1);

    printf("Account Created Sucessfully\n");
    printf("Press ANY KEY TO COMTUNE...");
    getch();
    system("cls");

    //dis(i);
}
void dis(struct user in)
{
    printf("*******************************\n");
    printf("Your A/c No:%d\n",in.acno);
    printf("Holder Name%s\n",in.name);
    //printf("Registered No:%lf\n",mob);
    printf("Balance:%d\n",depo1);
     printf("*******************************\n");
     printf("Pres key");
     getch();
     system("cls");
}
void depo(struct user d)
{
    int n;
    printf("Your Account No:%d\n",d.acno);
    printf("Balance is  %d\n",depo1);
    printf("Enter Ammount To Deposit:");
    scanf("%d",&bal1);
    printf("Amount Deposited of Rs%d\n",depo1);
    depo1=depo1+bal1;
    printf("Total Balance is:%d\n",depo1);
        printf("Press ANY KEY TO COMTUNE...");
    getch();
    system("cls");

}
void withdra(struct user d)
{
    printf("Account No:%d\n",d.acno);
    printf("Balance is:%d\n",depo1);
        printf("Enter a Amount To Withdraw\n");
        scanf("%d",&wit);
            depo1=depo1-wit;
            printf("Available Balance is %d\n",depo1);
       printf("Press ANY KEY TO COMTUNE...");
    getch();
    system("cls");
}
void tran(struct user p)
{
    int tac;
    int snd;
    printf("Account No:%d\n",p.acno);
    printf("Balance is:%d\n",depo1);
    printf("Enter A/c no To Send:");
    scanf("%d",&tac);
    printf("Enter Amount To Send");
    scanf("%d",&snd);
    if(depo1>=snd)
    {
      depo1=depo1-snd;
      printf("Available Balance:%d\n",depo1);
    }
    else
        printf("Low Balance\n");
}

