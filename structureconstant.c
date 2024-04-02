#include<stdio.h>
struct conststruct
{
    const int i;
    const int j;
};
int main()
{
    struct conststruct cobj={11,21};
    printf("value of i is:%d\n",cobj.i);
    cobj.i=12;
    printf("value of i is:%d\n",cobj.i);
    return 0;
}