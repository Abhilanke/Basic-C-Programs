#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
     //*(arr+3)
    printf("value of  is:%d\n",*(arr+3));
    //*(3+arr)
    printf("value of :%d\n",*(3+arr));
    //3[arr];
    printf("value of:%d\n",3[arr]);    

    return 0;
}
