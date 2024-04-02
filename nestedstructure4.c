 #include<stdio.h>
struct hello
{
    float f;
    int no;
    struct demo
    {
        int i;
        int j;
    }dobj;
}hobj;
int main()
{
struct hello hobj;
hobj.dobj.i=101;
hobj.dobj.j=401;
hobj.dobj.no=51;
hobj.dobj.f=32.322;
printf("%d\n",hobj.dobj.i);
printf("%d\n",hobj.dobj.j);
printf("%d\n",hobj.dobj.no);
printf("%f\n",hobj.dobj.f);
return 0;
}