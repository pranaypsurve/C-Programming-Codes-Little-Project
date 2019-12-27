#include<stdio.h>

union std{
int rol;
char name[10];
};

main()
{
    union std s1;
    printf("Enter Roll And Name:");
    scanf("%d",&s1.rol);
    printf("Enter Name");
    fflush(stdin);
    gets(s1.name);
    printf("\nPrinting\n");
    printf("%d %s",s1.rol,s1.name);


}
