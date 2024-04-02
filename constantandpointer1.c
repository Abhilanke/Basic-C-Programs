#include<stdio.h>
int main()
{
    int no=11;
    int *p=&no;
    no++;
    p++;
    (*p)++;
   // no=21;
  //  p=&i;
    printf(" value of no++ is:%d\n",no++);
    printf("value of p++ is:%d\n",p++);
    printf("value of (*p)++ is:%d\n",(*p)++);
  //  printf("value of no is:%d\n",no);
    //printf("value of p=&i is:%d\n",p);
    return 0; 
}