#include<stdio.h>
int main ()
{
    int a=1051;
    int b=2051;
    float c=11.51;
    char d='Abc';
    double e=122453;
    //void f=NULL;
    printf("value of integer is:%d\n",a);
    printf("address of integer is:%d\n",&a);
    printf("value of integer is:%d\n",b);
    printf("address of integer is:%d\n",&b);
    printf("value of float is:%d\n",c);
    printf("address of float is:%d\n",&c);
    printf("value of char is:%d\n",d);
    printf("address of char is:%d\n",&d);
    printf("value of double is:%d\n",e);
    printf("address of double is:%d\n",&e);
   // printf("value of void is:%d\n",f);
   // printf("address of void is:%d\n",&f);
    return 0;
}