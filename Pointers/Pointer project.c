#include<stdio.h>

struct person
{
    int age;
    char name[20];
    int ac;
    float per;
};
struct person *ptr,p1;

int main()
{
    printf("Program To Swap,Store Value in Structures,by using pointers And,Print Them\n\n");
    int r1,r2,r3,a,b;
    a=10,b=20;
    printf("Before Swaping a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swaping a=%d b=%d\n\n",a,b);
    fun();

    ptr=&p1;

    printf("Enter age\n");
    scanf("%d",&ptr->age);
    printf("Enter name\n");
    scanf("%s",&ptr->name);
    printf("Name-:%s",ptr->name);
    display();
    getch();


}
void display(struct person p1)
{
    printf("\n\nDispay Values using pointer to structure:\n");
    printf("Name-%s\n",ptr->name);
    printf("Age-%d\n",ptr->age);
}
void swap(int* p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void fun()
{
    int *p;
    printf("Null Pointer Example\n\n");
    printf("%d\n",sizeof(p));
    {
        int x=5;
        printf("Address of x - %d\n",&x);
        printf("%d\n",p);
        p=NULL;
    }
    printf("pointer p -> %d\n",p);
    getch();
}
