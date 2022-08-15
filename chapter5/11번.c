//11번
#include <stdio.h>

int main(void)
{
	unsigned int num=1;
	int i;
	
	printf(" 0번 비트만 1인 값: %08x %d\n", num, num);
	for(i=1; i<32; i++){
		num *= 2;
		printf("%2d번 비트만 1인 값: %08x %d\n", i, num, num);
	}
	
	return 0;
} 
