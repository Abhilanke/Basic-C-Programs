#include<stdio.h>
#include<stdlib.h>
int main()
{
    int new_size=0;
    int *ptr=NULL;
    int size=0;
    printf("Enter the size of element \n");
    scanf("%d",&size);
    ptr=(int*)malloc(size*(sizeof(int)));
    if(ptr==NULL)
    {
        printf("Memory does't allocated \n");

    }
    else
    {
       printf("memory is allocated sussesfully \n");
   }
    
    printf("Enter the new size for element \n");
    scanf("%d",&new_size);
    ptr=(int*)realloc(ptr,new_size*(sizeof(int)));
    if(ptr==NULL)
    {
        printf("memory realloction is unsuccesfull \n");

    }
    else
    {
         printf("memory realloction is succesfull \n");
    
    }
    return 0;
}