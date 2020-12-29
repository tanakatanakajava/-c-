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

/*“ü—Í‚µ‚½‡”Ô‚Æ‹t‚Ì‡”Ô‚Å”’l‚ğ•\¦‚·‚é*/
