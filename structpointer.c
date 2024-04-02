#include<stdio.h>
struct structptr

{
    int ivalue;
    float fvalue;
    int ino;
};
int main()
{
    struct structptr dobj;
    struct structptr *ptr=NULL;
    ptr=&dobj;
    ptr->ivalue=51;
    ptr->fvalue=51.21;
    ptr->ino=101;
    printf("value of ivalue is:%d\n",ptr->ivalue);
    printf("value of fvalue is:%f\n",ptr->fvalue);
    printf("value of ino is:%d\n",ptr->ino);



    return 0;
}