#include<stdio.h>
int main()
{
    int no=11;
    int *p=&no;
    int addition(int,int);
    int(*fptr)(int,int);
    int a=10;
    int b=21;
    int ret=0;
   // int addition(int,int);
    //int *fptr(a,b);
    printf("addition is:%d\n",ret);
    
      
    return 0;
}
int addition(int value1,int value2)
{
    int ans=0;
    ans=value1+value2;
    return ans;
}