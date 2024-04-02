#include<stdio.h>
int  addition(int no1,int no2)
{
    auto int ians=0;
    ians=no1+no2;
    return ians;
}
int substraction(int no1,int no2)
{
    auto int ians=0;
    ians=no1-no2;
    return ians;
}
int main()
{
    auto int ivalue1=0,ivalue2=0,iret=0;
    printf("enter first number is:\n");
    scanf("%d",&ivalue1);
    printf("enter second value is:\n");
    scanf("%d",&ivalue2);
    iret=addition(ivalue1,ivalue2);
    printf("additon of two number is:%d\n",iret);
    iret=substraction(ivalue1,ivalue2);
    printf("subraction of two number is:%d\n",iret);
    return 0;
}