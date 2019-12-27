// 10. Write a C program to find the eligibility of admission for a professional course based on the following criteria:
#include<stdio.h>
int main()
{
    int math,phy,chim;

    printf("Eligibility Criteria :\n");
   printf("Marks in Maths >=65\n");
   printf("and Marks in Phy >=55\n");
   printf("and Marks in Chem>=50\n");
   printf("and Total in all three subject >=180\n");
   printf("or Total in Maths and Physics >=140\n");
   printf("-------------------------------------\n");

   /* printf("Enter 3 Subjects Marks:");
    scanf("%d%d%d",&math,&phy,&chim);
     int total=math+phy+chim;
     if(total>=180)
        printf("The candidate is eligible for admission");
     else
        printf("The candidate is Not eligible for admission");*/

         printf("Enter 3 Subjects Marks:");
         scanf("%d%d%d",&math,&phy,&chim);
         printf("%d\n",math+phy+chim);
         if(math>=65)
               if(phy>=55)
                   if(chim>=50)

                    if((math+phy+chim)>=180||(math+phy)>=140)

                    printf("The  candidate is eligible for admission.\n");
                    else
                    printf("The candidate is not eligible.\n");

                else
	                printf("The candidate is not eligible.\n");

                else
                    printf("The candidate is not eligible.\n");

                else
                    printf("The candidate is not eligible.\n");
                    }
