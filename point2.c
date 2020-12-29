#include <stdio.h>
int main(void)
{
	char str[]="hello world";
	
	*str-=('a'-'A'); 
	*(str+6)-=('a'-'A'); 
	
/*	実行結果
	Hello World
*/
	
		
	*str+=('a'-'A'); 
	*(str+6)+=('a'-'A');
	
/*	実行結果
	hello world
*/

	*str+=('a'-'A'); 
	*(str+5)+=('a'-'A');
	
/*	実行結果
	・llo@world
*/
	
	printf("%s\n",str);
	
	return 0;
}

