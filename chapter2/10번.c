//10��
#include <stdio.h>

int main(void)
{
	int num;
	
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	printf("����? ");
	scanf("%i", &num);
	
	printf(" 8����: %#o\n", num);
	printf("10����: %d\n", num);
	printf("16����: %#x\n", num);
	
	return 0;
} 
