#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=NULL;
    int size=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    ptr=(int*)calloc(size,(sizeof(int)));
    if(ptr==NULL)
    {
        printf("Memory is not allocated");
    }
    else
    {
        printf("Memory allocated succssfully ");
    
    }

      free(ptr);

    return 0;
}