#include<stdio.h>
#define num 0
#define msg(a,b) \
printf(#a " And " #b ":We Love You!\n");
#define YEARS_OLD 4
#define COUNTRY "India"


main()
{
    #ifdef COUNTRY
    printf("Its My India\n");
    #endif // COUNTRY
    #ifndef COUNTRY
    printf("Others\n");
    #endif
     #if YEARS_OLD <= 10
   printf("less < 10.\n");
   #elif YEARS_OLD > 10
   printf("> 10\n", YEARS_OLD);
   #endif
    #include"add.c"
    printf("Hi, Hello Word\n");
    int s=add(10,5);
    printf("Sum is :%d",s);
    printf("\n\n");
    printf("%d",num);
    #undef num
    msg(\npranay,siddhi);


    //printf("%d",num);
    printf("\nFile :%s",__FILE__);
    printf("\nFile :%s",__TIME__);
    printf("\nFile :%s",__DATE__);
     printf("\nLine :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

}
