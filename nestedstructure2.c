#include<stdio.h>
struct demo;
{
    int i;
    int j;
};
struct hello
{
    float f;
    int no;
    struct demo obj;

};
int main()
{
    struct hello obj;
    obj.f=18.81;
    obj.no=51;
    printf("%f\n",obj.f);
    printf("%d\n",obj.no);

    return 0;
}