#include<stdio.h>
int main(void)
{
	char c='A';
	char *p;
	
	p=&c;
	
	printf("%c\n",*p);
	
	*p+=2; /*ポインタのなかみを+2している*/
	
	/* *pのようにアスタリスクを忘れない*/
	
	printf("%c\n",*p);
	
	/* ＋２した後のポインタを表示*/
	
	return 0;
}

/*ポインタのさしている中身を+２するプログラム*/	