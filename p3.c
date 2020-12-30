#include<stdio.h>
int main(void)
{
	int a=611,*ptr;
	
	ptr=&a;
	printf("変数Aのアドレス=%p\n",&a);
	printf("変数aの値=%d\n",a);
	
	printf("ptrの値=%p\n",ptr);
	printf("ptrの指し示す値=%d\n",*ptr);
	
	return 0;
}