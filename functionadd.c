//program using function defining
#include<stdio.h>
int addition( No1, No2)
{
	int Ans = 0;
	Ans = No1 + No2;
	return Ans;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = addition(a,b);
	printf("%d",c);
	return 0;
}
