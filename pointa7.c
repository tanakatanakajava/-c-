#include<stdio.h>
int main(void)
{
	char * signal[]={"red","blue","yellow"};
	
	int i;
	
	for(i=0;i<3;i++)
		printf("%s\n",signal[i]);
		
	return 0;
		
}