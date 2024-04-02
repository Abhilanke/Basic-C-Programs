#include<stdio.h>
int main()
{
    auto int istd=0;
    printf("Enter your standhard \n");
    scanf("%d",&istd);
    switch(istd)
    {
        case 1:
        printf("your exam is at 8 am \n");
        break;
        case 2:
        printf("your exam is at 9 am \n");
        break;
        case 3:
        printf("your exam is at 10 am \n");
        break;
        case 4:
        printf("your exam is at 11 am \n");
        break;
        case 5:
        printf("your exam is at 12 am \n");
        break;
        default:
        printf("In valid standhard \n");
    
    }
    return 0;
}