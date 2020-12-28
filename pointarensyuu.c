#include<stdio.h>
int main(void)
{
	int date=123;
	int *iptr;
	
	
	/* 
	   int    → *iptr
	   double → *dptr
	   float  → *fptr
	   char   → *cptr
	  
	 */
	
	iptr=&date;
	
	printf("アドレス=%p\n",iptr);
	printf("値=%d\n",*iptr);
	
	return 0;
}