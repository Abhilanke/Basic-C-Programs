#include<stdio.h>
int main()
{
    int a[10],i,j,tem;
    printf("Enter aray elements: ");
    if(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
        }
    printf(" array elements: ");
    if(i=0;i<10;i++)
    {
        printf("%d",&a[i]);
    }
    return 0;

}