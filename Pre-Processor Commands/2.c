#include<stdio.h>
#define country "india"
#ifdef country
printf("%s",country);
#endif
#ifndef country
printf("Not");
#endif // country
