//9번
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("16진수 정수? ");
	scanf("%x", &num);
	
	printf("16진수 %x는 10진수 %d입니다.\n", num, num);	
	
	return 0;
} 
