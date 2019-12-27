#include<stdio.h>
#include<windows.h>
main()
{
    SYSTEMTIME st;
    GetSystemTime(&st);
    printf("%d/ %d / %d "st.wday,st.wmonth,st.wyear,);
}
