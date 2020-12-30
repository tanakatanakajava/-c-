#include<stdio.h>
int main(void)
{
	int a=611,*iptr;
	
	iptr=&a;
	printf("変数Aのアドレス=%p\n",&a);
	printf("変数aの値=%d\n",a);
	
	printf("ptrの値=%p\n",iptr);
	printf("ptrの指し示す値=%d\n",*iptr);
	
	return 0;
}