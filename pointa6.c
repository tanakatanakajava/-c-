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

/*文字列を一文字ずつ表示させるプログラム*/
