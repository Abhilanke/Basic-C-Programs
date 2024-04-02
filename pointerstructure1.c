#include<stdio.h>
struct ptrstruct
{
    int *iptr;
    float *fptr;
    char *cptr;
    double *dptr;
};
int main()
{
    struct ptrstruct pobj;
    int ino=11;
    float fno=98.54;
    char cno='A';
    double dno=2222.23456;
    pobj.iptr=&ino;
    pobj.fptr=&fno;
    pobj.cptr=&cno;
    pobj.dptr=&dno;
    printf("address of ino is:%d\n",pobj.iptr);
    printf("address of fno is:%f\n",pobj.fptr);

    printf("value of ino is:%d\n",*(pobj.iptr));
    printf("value of fno is:%f\n",*(pobj.fptr));


    printf("address of cno is:%d\n",pobj.cptr);
    printf("address of dno is:%lf\n",pobj.dptr);

    printf("value of cno is:%d\n",*(pobj.cptr));
    printf("value of dno is:%lf\n",*(pobj.dptr));

    return 0;
}