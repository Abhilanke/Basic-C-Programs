#include<stdio.h>
int main()
{
    int a=100;
    int b=02;
    int c=0;
    c=addtion(a+b);
    printf("addition is:%d\n",c);   
    return 0;
}
int addtion(int no1,int no2);
{
    int ans=0;
    ans=no1+no2;
    return ans;
}