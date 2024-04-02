#include<stdio.h>
int main()
{
    int arr[5]={100,200,300,400,500};
    int *ptr=arr;
    ptr=ptr+;
    ptr=ptr+2;
    ptr1=ptr+1 *(sizeof(pointertype));
    ptr2=ptr++ *(sizeof(int));
    //ptr=ptr1 *(4);
    printf("%d\n",*ptr);
    printf("%d\n",ptr1);
    printf("%d\n",ptr2);
    return 0;
}