#include<stdio.h>
int main(void)
{
	int date=123;
	int *iptr;
	
	
	/* 
	   int    �� *iptr
	   double �� *dptr
	   float  �� *fptr
	   char   �� *cptr
	  
	 */
	
	iptr=&date;
	
	printf("�A�h���X=%p\n",iptr);
	printf("�l=%d\n",*iptr);
	
	return 0;
}