#include<stdio.h>
int main(void)
{
	char hello[]="Hello,Worrld";
	
	char *p =hello;
	
	while(*p){
		printf("%c\n", *p++);
	}
	
	return 0;
}

/*��������ꕶ�����\��������v���O����*/
