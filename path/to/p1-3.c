#include<stdio.h>
int main(void)
{
	int a=611,*iptr;
	
	iptr=&a;
	printf("�ϐ�A�̃A�h���X=%p\n",&a);
	printf("�ϐ�a�̒l=%d\n",a);
	
	printf("ptr�̒l=%p\n",iptr);
	printf("ptr�̎w�������l=%d\n",*iptr);
	
	return 0;
}