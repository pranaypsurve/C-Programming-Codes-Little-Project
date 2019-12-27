#include<stdio.h>
#define india 1
#define pak 2
#define country india

int main()
{
    #if country == pak
printf("pak");
#elif country == india
printf("india");
#endif
printf("\nhi");
}
