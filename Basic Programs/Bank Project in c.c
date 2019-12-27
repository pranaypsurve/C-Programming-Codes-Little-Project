#include<stdio.h>
#include<conio.h>
#include<windows.h>
//Global Variables
float amt;
int bal,withdraw=0,deposit=0;
int chk; //to check ac no of user
char name[50];
int age,ano;

COORD coord={0,0}; // this is global variable
                                   //center of axis is set to the top left cornor of the screen
void gotoxy(int x,int y)
{
  	coord.X=x;
 	coord.Y=y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int ch;
    while(ch!=4){
    system("cls");
    gotoxy(10,2);
     printf("Bank Management System\n");
    printf("1.Make Ac\n");
    printf("2.Deposit\n");
    printf("3.Withdraw\n");
    printf("4.Exit\n");
    printf("Enter a Choise:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        makeac();
        break;
    case 2:
        deposi();
        break;
    case 3:
        withdra();
        break;
    case 4:
        break;
    }
    }
}
void makeac()
{
    printf("\nEnter Your Name:");
    fflush(stdin);
    //gets(name);
    fgets(name,20,stdin);
    printf("Enter Your age:");
    scanf("%d",&age);
    printf("Enter Ac No Manually:");
    scanf("%d",&ano);
    printf("Your Account as Been Created Sucessfully\n\n");
    printf("--Press Any Key--\n");
    getch();
    //ac_detail();
}
void deposi()
{
    int n;
    printf("Enter Your Account Number:");
    scanf("%d",&chk);
    if(chk==ano){
            printf("Your Balance is : %d\n",deposit);
        printf("Enter Amount To Deposit");
        scanf("%d",&n);
        deposit=n+deposit;
        printf("\nBalance is %d\n",deposit);
        printf("%s Your Account No. %d is Credited With Rs %d\n",name,ano,deposit);
    }
    else{
        printf("You Entered Account Number is Invalid !!\n");
    }
    printf("--Press Any Key--\n");
    getch();
}
void ac_detail()
{
    printf("***************************************\n");
    printf("Your Name:%s\n",name);
    printf("Your Account Number %d\n",ano);
    printf("Total Balance %d",deposit);
    printf("\n***************************************\n");
}
void withdra()
{
    printf("Account No:%d\n",ano);
    printf("Balance is:%d\n",deposit);
    printf("Enter Amount To Withdraw:");
    scanf("%d",&withdraw);
    int p;
    if(deposit>=withdraw)
    {
        deposit=deposit-withdraw;
        printf("Withdraw Sucessfull !!\n");
}
    else if(withdraw>deposit)
        printf("Low Balance\n");
    printf("--Press Any Key--\n");
    getch();
}
