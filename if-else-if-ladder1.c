#include<stdio.h>
int main()
{
    auto int istd=0;
    printf("Enter your standhard is:\n");
     scanf("%d",&istd);
     if(istd==1)
     {
        printf("your exam is at 8 am \n");
     }
     else if(istd==2)
     {
        printf("your exam is at 9 am \n");
     }
     else if(istd==3)
     {
        printf("your exam is at 10 am \n");
     }
     else if(istd==4)
     {
        printf("your exam is at 11 am \n");
     }
     else if(istd==5)
     {
        printf("your exam is at 12 am \n");
     }
     else
     {
        printf("In valid standhard \n ");
     }
    return 0;
}