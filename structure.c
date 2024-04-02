#include<stdio.h>
struct Demo
{
    int data;
    char ch;
    float fvalue;
    double dvalue;
    //void vvalue;

};
int main()
{
    struct Demo obj;
    obj.data=11;
    obj.ch='A';
    obj.fvalue=18.98;
    obj.dvalue=999.88888;
    //obj.vvalue=0;
    printf("value of data is:%d\n",obj.data);
    printf("value of ch is:%c\n",obj.ch);
    printf("value of float is:%f\n",obj.fvalue);
    printf("value of double is:%lf\n",obj.dvalue);
   // printf("value of void is:%d\n",obj.vvalue);
    return 0;    
}