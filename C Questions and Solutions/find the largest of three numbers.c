#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 no");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else
    {
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }

}

