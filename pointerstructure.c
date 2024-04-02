#include<stdio.h>
struct ptrstruct
{
    int *iptr;
    float *fptr;
};
int main()
{
    struct ptrstruct pobj;
    int ino=11;
    float fno=98.54;
    pobj.iptr=&ino;
    pobj.fptr=&fno;
    printf("address of ino is:%d\n",pobj.iptr);
    printf("address of fno is:%f\n",pobj.fptr);
    printf("value of ino is:%d\n",*(pobj.iptr));
    printf("value of fno is:%f\n",*(pobj.fptr));
    return 0;
}