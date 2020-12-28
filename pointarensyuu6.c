#include<stdio.h>
int main(void)
{
	int array[]={10,20,30,40,50};
	int *iptr=array;
	int i;
	
	printf("%d\n",iptr[0]);
	printf("%d\n",iptr[1]);	
	printf("%d\n",iptr[2]);	
	printf("%d\n",iptr[3]);
	printf("%d\n",iptr[4]);

	/*
	
	printf("\n"); /*改行する(とくにいみはない）*/
	
	for(i=0; i<5; i++){
		printf("%d\n",iptr[i]);
	}
	
	return 0;
}
	
	/*ポインタ表現をそのまま
	配列するプログラム*/