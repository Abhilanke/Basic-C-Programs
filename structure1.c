#include<stdio.h>
struct Demo
{
    int ivalue;
    int no;
    float fvalue;

};
int main()
{
    struct Demo obj;
    obj.ivalue=12;
    obj.no=432;
    obj.fvalue=778.87;
    printf("value of inteager is:%d\n",obj.ivalue);
    printf("value of inteager is:%d\n",obj.no);
    printf("value of float is:%f\n",obj.fvalue);
    return 0;
}