#include<stdio.h>
struct hello  //inner srtucture
{
    int ino;
    float fno;

};
struct demo  //outer structure
{
    char ch;
    double dvalue;
    struct hello hobj;  //in saide the stucture we can create another structure 
};
int main()
{
    struct demo dobj;
    dobj.ch='A';
    dobj.dvalue=99.976880;
    dobj.hobj.ino=17;
    dobj.hobj.fno=37.45;
    printf("%c\n",dobj.ch);
    printf("%lf\n",dobj.dvalue);
    printf("%d\n",dobj.hobj.ino);
    printf("%f\n",dobj.hobj.fno);
    return 0;
}