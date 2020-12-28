#include<stdio.h>
int main(void)
{
	int array[]={1,2,3,4,5};
	int i=0;
	
	int *iptr=array;
	
	for(i=0; i<5; i++){
		
		printf("%d",*(iptr+i));
	}
	
	return 0;
}
