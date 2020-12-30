#include<stdio.h>
int main(void)
{
	int date=123;
	int *p;
	int *iptr;
	
	
	/* 
	   int     *iptr
	   double  *dptr
	   float   *fptr
	   char    *cptr
	  
	 */
	
	p=&date;
	*p=123;
	
	printf("アドレス=%p\n",iptr);
	printf("’値=%d\n",*p);
	
	return 0;
}
