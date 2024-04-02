#include<stdio.h>
int main()
{
    int arr[5]={11,21,51,101,151};
    int(*p)=&(arr[0]);
    int(*q)=&(arr[4]);
    printf("%d\n",(*p));
    printf("%d\n",(*q));
    return 0;
}