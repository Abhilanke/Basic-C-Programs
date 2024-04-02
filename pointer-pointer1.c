#include<stdio.h>
int main()
{
    int arr[5]={11,21,51,101,151};
    int *ptr=arr[4];
    ptr=ptr-3;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    return 0;
}