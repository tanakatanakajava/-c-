#include<stdio.h>
int main(void)
{
	char c='A';
	char *p;
	
	p=&c;
	
	printf("%c\n",*p);
	
	*p+=2; /*�|�C���^�̂Ȃ��݂�+2���Ă���*/
	
	/* *p�̂悤�ɃA�X�^���X�N��Y��Ȃ�*/
	
	printf("%c\n",*p);
	
	/* �{�Q������̃|�C���^��\��*/
	
	return 0;
}

/*�|�C���^�̂����Ă��钆�g��+�Q����v���O����*/	