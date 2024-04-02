#include<stdio.h>
int main()
{
    int a=20;
    int b=30;
    int ret=0;
    int addition(int,int);
    int (*fptr)(int,int);
    fptr=addition;
    ret=fpt(a,b);
    printf("addition of two number is:%d\n",ret);
    printf("address of two function is:%u\n",fptr);
    return 0;
}
int addition(int value1,int value2)
{
    int ans=0;
    ans=value1+value2;
    return ans;
} 
