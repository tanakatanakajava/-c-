#include<stdio.h>
int main(void)
{
	int array[]={1,20,3,4,5};
	
	int *iptr=array;
	
	
	printf("%d\n",*(iptr+0)*100);
	printf("%d\n",*(iptr+1));	
	printf("%d\n",*(iptr+2));		
	printf("%d\n",*(iptr+3));		
	printf("%d\n",*(iptr-1));
	
	return 0;
}
