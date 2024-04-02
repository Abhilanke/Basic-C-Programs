#include<stdio.h>
int main()
{
    int arr[5]={11,21,51,101,151};
    int *ptr=arr[0];
   // ptr=ptr+ptr;
    printf("%d\n",*ptr);
    //printf("%d\n",ptr+ptr);
    return 0;
}