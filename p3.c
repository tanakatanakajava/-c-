#include<stdio.h>
int main(void)
{
	int a=611,*ptr;
	
	ptr=&a;
	printf("�ϐ�A�̃A�h���X=%p\n",&a);
	printf("�ϐ�a�̒l=%d\n",a);
	
	printf("ptr�̒l=%p\n",ptr);
	printf("ptr�̎w�������l=%d\n",*ptr);
	
	return 0;
}