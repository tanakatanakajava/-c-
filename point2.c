#include <stdio.h>
int main(void)
{
	char str[]="hello world";
	
	*str-=('a'-'A'); 
	*(str+6)-=('a'-'A'); 
	
/*	���s����
	Hello World
*/
	
		
	*str+=('a'-'A'); 
	*(str+6)+=('a'-'A');
	
/*	���s����
	hello world
*/

	*str+=('a'-'A'); 
	*(str+5)+=('a'-'A');
	
/*	���s����
	�Ello@world
*/
	
	printf("%s\n",str);
	
	return 0;
}

