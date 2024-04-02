#include<stdio.h>
void quick_sort(a,int low, int high)

{
    int pivot,t,i,j,a;
    if(low<high)
    {
        pivot=a[low];
        i=low;
        j=high;
        while(i<=j)
        {
            while(pivot>=a[j]&&j>=low)
            j--;
            if(i<j)
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
        }
            a[low]=a[j];
            a[j]=pivot;
            quick_sort(a,low,j-1);
            quck_sort(a,j+1,high);

            
        
    }
    return 0;
}