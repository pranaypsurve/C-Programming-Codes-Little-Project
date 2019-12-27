#include<stdio.h>
main()
{
    //Returing Multiple Values
    int n = 100;
    int sq;
    double sq_root;
    int a=5,b=5,t;
    printf(" Normal Value of sq %d\n",&sq);
    fun(n,&sq,&sq_root,&a,&b,&t);
     printf("Square of %d is %f\n",sq,sq_root);
     printf("addition is %d\n",t);

}
void fun(int n,int *sq,double* sq_root,int *a,int *b,int *t)
{

    *sq=n*n;
    *sq_root=sqrt(n);
    *t=*a+*b;
    printf("Add of sq is %d\n",sq);
    printf("Add of sq_root is %d\n",sq_root);
   // printf("Square of %d is %f\n",*sq,*sq_root);
}
