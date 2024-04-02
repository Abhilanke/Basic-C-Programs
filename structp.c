#include<stdio.h>
struct hobj
{
    int i;
    float f;
    int j;
}hobj;
int main()
{
    hobj.i=11;
    hobj.f=22.84;
    hobj.j=21;
    printf("value of integer is:%d\n",hobj.i);
    printf("value of float is:%f\n",hobj.f);
    printf("value of integer is:%d\n",hobj.j);
    return 0;
}