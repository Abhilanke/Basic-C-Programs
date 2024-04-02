#include<stdio.h>
int main()
{ 
    int marks=0;
    printf("Enter your marks \n");
    scanf("%d",&marks);
    if(marks>=60 && marks<=85)
    
    {
        printf("your passing first class \n");
    }  
    else if(marks>=35 && marks<=60)
    {
        printf("your passing second class \n");
    }
    else if(marks>=1 && marks<=35)
    {
        printf("your result are fail \n");
    }
    if(marks>=85)
    {
        printf("your passing topper \n");
    }
    return 0;
}