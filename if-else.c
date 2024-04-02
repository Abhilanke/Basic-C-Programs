#include<stdio.h>
int main()
{ 
    int marks=0;
    printf("Enter your marks \n");
    scanf("%d",&marks);
    if(marks>=60)
    
    {
        printf("your passing first class \n");
    }  
    else
    {
        printf("your passing second class \n");
    }

    return 0;
}