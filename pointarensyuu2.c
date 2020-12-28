#include<stdio.h>
int main(void)
{
	int array[]={10,20,30,40,50};
	
	int  *iptr=array;
	
	
	printf("%d	",*(iptr+0));
	
	printf("%d	",*(iptr+1));
	printf("%d	",*(iptr+2));
	printf("%d	",*(iptr+3));
	printf("%d	",*(iptr+4));
	
	
	return 0;
}