#include<stdio.h>
int main()
{
    int arr[4]={11,21,51,101};
    int *ptr=arr;
    ptr=*ptr;
    printf("%d\n",*ptr);
    //printf("%d\n",ptr);
    
    return 0;
}