#include<stdio.h>
int addition(int no1,no2)
{
    int ret=0;
    ret=no1+no2;
    return ret;
}
int main()
{
    int a=10;
    int b=20;
    int c=0;
    c=addition(a,b);
    printf("Addition of two number is:%d\n",c);
    return 0;
}