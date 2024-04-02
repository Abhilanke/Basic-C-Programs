#include<stdio.h>
struct memberbymemberinitlist
{
    int ivalue;
    float fvalue;
    char cvalue;
    double dvalue;
};
int main()
{
    struct memberbymemberinitlist mobj;
    mobj.ivalue=11;
    mobj.fvalue=22.222;
    mobj.cvalue='H';
    mobj.dvalue=8899.8474757885;
    printf("value of ivalue is:%d\n",mobj.ivalue);
    printf("value of fvalue is:%f\n",mobj.fvalue);
    printf("value of cvalue is:%d\n",mobj.cvalue);
    printf("value of dvalue is:%lf\n",mobj.dvalue);
    return 0;
}