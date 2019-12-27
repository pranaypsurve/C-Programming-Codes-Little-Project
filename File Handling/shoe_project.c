#include<stdio.h>
main()
{
    int i,j;
    char shopn[20],partn[10];
    float price;
    printf("  Store Shops Name And Computers Parts Price Information\n");
    FILE *fp;
    fp=fopen("G:\saved.txt","a");
    if(fp==NULL)
    {
        exit(1);
    }
    printf("Enter Shop Name:");
    gets(shopn);
    fputs(&shopn,fp);
    fputs("   ",fp);
    printf("Enter Part name:");
    gets(&partn);
    fputs(&partn,fp);
    fputs("    ",fp);
    printf("Enter Price:");
    gets(&price);
    fputs(&price,fp);
    fputs(" ",fp);
    fputs("\n",fp);

    fclose(fp);
    // displaying records
    char read[50];
    FILE *f;
    f=fopen("G:\saved.txt","r");
    if(f==NULL)
    {
        exit(1);
    }
    while(fgets(read,30,f)!=NULL)
          {
                printf("%s",read);
          }
   fclose(f);
   getch();
}
