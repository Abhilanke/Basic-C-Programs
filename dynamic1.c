#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size =0;
    int *ptr=NULL;
    printf("Enter the size for elements:\n");
    scanf("%d",&size);
    ptr=(int*)malloc(size *(sizeof(int)));
    if(ptr==NULL)
    {
    printf("Memory is not allocated \n ");
    }
    else
    {
      printf("memory is allocated successfully\n");
    }
    printf("size of ptr=%d\n",sizeof(ptr + 4));
    free(ptr);

    return 0;
}