// address of no,ch and sizeof no,ch
#include<stdio.h>
int main()
{
	int no = 11;
	char ch ='A';
	printf("value of no:%d\n",no);
	printf("value of is:%c\n",ch);
	printf("address of no i:%u\n",&no);
	printf("address of ch is:%u\n",&ch);
	printf("size of no is : %d\n",sizeof(no));
	printf("sizeof ch is: %d\n",sizeof(ch));
	return 0;
}
