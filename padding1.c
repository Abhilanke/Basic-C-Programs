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
    printf("size of ivalue is:%d\n",dobj.ivalue);
    printf("size of cvalue is:%c\n",dobj.cvalue);
    printf("size of fvalue is:%f\n",dobj.fvalue);
    printf("size of dvalue is:%lf\n",dobj.dvalue);
    printf("size of object:%d\n",dobj);
    return 0;
}