#include<stdio.h>
int main()
{
    const int no=11;
    const int*const p=&no;
    int const *const p=&no;
    //no++;
    p++;
   // (*p)++;
    no=21;
    p=&i;
    //printf("value no++ is:%d\n",no++):
    printd("value p++ is:%d\n",p++);
   // printf("value (*p)++ is:%d\n",(*p)++);
    printf("value no is:%d\n",no);
    printf("value p=&i is:%d\n",p);
    return 0;
}