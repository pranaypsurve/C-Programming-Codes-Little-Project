#include"stdio.h"
main()
{
    //by userdifined
    /* char s[20];
    int i;
    printf("Enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    {
        printf("Length is %d",i);
    }*/

    //By using strlen() function
    char s[20];
    int i;
    printf("Enter a string:");
    gets(s);
    i=strlen(s);
    printf("%d",i);

}
