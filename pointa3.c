#include<stdio.h>
int main(void)
{
	int array[10];
	int i;

	for(i=0; i<10; i++)
		scanf("%d",array+i);
		
	printf("\n");
	
	for(i=9; i>=0; i--)
		printf("%d ",*(array+i));
	
	return 0;
}

/*入力した順番と逆の順番で数値を表示する*/
