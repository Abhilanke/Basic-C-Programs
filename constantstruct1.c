#include<stdio.h>
struct hello
{
    int i;
    int j;
};
int main()
{
    const struct hello hobj={11,21};
    printf("%d\n",hobj.i);
    printf("%d\n",hobj.j);

    hobj.i=12;
    printf("%d\n",hobj.i);
    return 0;
}
