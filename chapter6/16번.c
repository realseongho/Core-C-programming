//16번
// https://github.com/0083tony/Core-C-Programming/wiki/CHAPTER-06 참조 
#include <stdio.h>
int is_bit_set(int data,int pos);

int main(void)
{
	int i,num,blank=0;
	
	printf("정수? ");
	scanf("%x", &num);
	printf("%X: ", num);
	
	for(i=31;i>=0;i--){
		if(blank==4){
			printf(" ");
			blank = 0;
		}
		printf("%d", is_bit_set(num,i));
		blank++;
	}
	
	return 0;
}  
int is_bit_set(int data,int pos)
{
	return (data&1<<pos? 1 : 0);
}
