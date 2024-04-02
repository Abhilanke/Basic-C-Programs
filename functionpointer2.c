#include<stdio.h>
int main()
{
    int no=11;
    int *p=&no;
    //int addition(int,int);
    //int(*fptr)(int,int);
    int a=10;
    int b=21;
    int ret=a+b;
    int addition(int,int);
    int *fptr(a,b);
    printf("addition of two value is:%d\n",ret);
    printf("address of value is:%d\n",&ret);
    
      
    return 0;
}
int addition(int value1,int value2)
{
    int ans=0;
    ans=value1+value2;
    printf("addition of two value is:%d\n",ans);
    printf("adress of value is:%d\n",&ans);
    return ans;
}
