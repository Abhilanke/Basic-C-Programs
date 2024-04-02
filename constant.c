//constant
#include<stdio.h>
int main()
{
	int no1 = 10;
	const int no2 = 10;
	no1++;
//	no2++;
	printf("%d\n",no1);//allowed
	printf("%d\n",no2);//not allowed
	return 0;
}
