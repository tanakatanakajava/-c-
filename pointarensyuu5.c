#include<stdio.h>
int main(void)
{
int array[]={10,20,30,40,50};
int *iptr=array;
int i;

for(i=0; i<5; i++){
	
	printf("%d\n",*(iptr+i));
}/*配列の数字をアクセスする
  ０から４番目*/

return 0;
}
