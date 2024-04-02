#include<stdio.h>
#pragma pack
struct demo
{
    int ivalue;
    char cvalue;
    float fvalue;
    double dvalue;
};
int main()
{
    struct demo dobj;
    dobj.ivalue=11;
    dobj.cvalue='M';
    dobj.fvalue=11.14;
    dobj.dvalue=33.333333333;
    printf("size of ivalue is:%d\n",sizeof(dobj.ivalue));
    printf("size of cvalue is:%d\n",sizeof(dobj.cvalue));
    printf("size of fvalue is:%d\n",sizeof(dobj.fvalue));
    printf("size of dvalue is:%d\n",sizeof(dobj.dvalue));
    return 0;
}