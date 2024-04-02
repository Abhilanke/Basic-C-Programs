#include<stdio.h>
int main()
{
    int icnt=0;
    int sum=0;
    for (icnt=0;icnt<5;icnt++)
    {
        sum=icnt+sum;
    }
    printf("%d\n",sum);
    return 0;
}