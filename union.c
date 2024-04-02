#include<stdio.h>
struct demo
{
    int ivalue;
    int ino;
    float fvalue;
};

union hello
{
    int no;
    float fno;
    int value;  
};
int main()
{
    struct demo dobj;
    union hello hobj;
    dobj.ivalue=11;
    dobj.ino=21;
    dobj.fvalue=99.9999;

    hobj.no=51;
    hobj.value=98;
    hobj.fno=77.77;

    printf("%d\n",dobj.ivalue);
    printf("%d\n",dobj.ino);
    printf("%f\n",dobj.fvalue);

    printf("%d\n",hobj.no);
    printf("%d\n",hobj.value);
    printf("%f\n",hobj.fno);
    
    return 0;
}
