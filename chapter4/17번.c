//17��
#include <stdio.h>

int main(void)
{
	unsigned int Seven=1, Fifteen=1, Twenty_three=1, Thirty_one=1; 
	
	Seven <<= 7;
	Fifteen <<= 15;
	Twenty_three <<= 23;
	Thirty_one <<= 31;
	
	printf("7�� ��Ʈ�� 1�� ��: %08X %d\n", Seven, Seven);
	printf("15�� ��Ʈ�� 1�� ��: %08X %d\n", Fifteen, Fifteen);
	printf("23�� ��Ʈ�� 1�� ��: %08X %d\n", Twenty_three, Twenty_three);
	printf("31�� ��Ʈ�� 1�� ��: %08X %d\n", Thirty_one, Thirty_one); 
	
	return 0;
} 
