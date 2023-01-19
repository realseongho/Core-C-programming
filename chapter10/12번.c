/*
	���α׷� ���� : low word, high word ���� �Ű������� ���޹޾� ����ü�� ����� �����ϴ� �Լ�
	�ǽ��� : 2022.10.16
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef union mydata {
	unsigned int dword;
	unsigned short words[2];
}MD;
MD make_dword(short a, short b);
int main(void)
{
	short a, b;
	printf("low word? ");
	scanf("%hi", &a);
	printf("high word? ");
	scanf("%hi", &b);
	
	printf("dword data: %8x\n", make_dword(a, b).dword);

	return 0;
}
MD make_dword(short a, short b)
{
	union mydata data;

	data.words[0] = a;
	data.words[1] = b;

	return data;
}
