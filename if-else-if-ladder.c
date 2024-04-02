#include<stdio.h>
int main()
{
    auto int age=0;
    printf("Enter your age is:\n");
    scanf("%d",&age);
    if(age>=0 && age<=10)
    {
        printf("your ticket amount is:100 Rs\n");
    }
    else if(age>10 && age<=40)
    {
        printf("your ticket amount is:500 Rs\n");
    }
    else if(age>40)
    {
        printf("your ticket amount is:300 Rs \n");

    }
    return 0;
}