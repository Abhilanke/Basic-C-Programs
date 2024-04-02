#include<stdio.h>
int main()
{
   int a=11;
   int *ptr=&a;
   int *qptr=NULL;
   int *vptr=0;
   printf("%d\n",a);
   printf("%d\n",*ptr); 
   printf("%d\n",*qptr); 
   printf("%d\n",*vptr); 
    return 0;
}