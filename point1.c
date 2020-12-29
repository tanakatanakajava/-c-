#include<stdio.h>
int main(void)
{
	int	x=12;
	int*	p;
	
	p=&x;
	*p=12;
	
	printf("%d\n",x); 
	return 0;
}