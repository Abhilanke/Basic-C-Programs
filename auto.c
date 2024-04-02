#include<stdio.h>
//auto int no = 11;
void gun()
{
	register float value = 20.3;
	printf("value of f is %f",value);  //
	
}
int main()
{
	printf("Inside main");
	gun();
	return 0;
}
