#include<stdio.h>
int main()
{
    int arr[5]={101,201,301,401,501};
    int *ptr=arr[4];
    ptr=ptr--;
    printf("%d\n",*ptr); 
    printf("%d\n",ptr); 
    return 0;
}