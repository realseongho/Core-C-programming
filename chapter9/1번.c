/*
	���α׷� ���� : 1��
	�ǽ��� : 2022.09.30
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main(void)
{
	char str[255] = "";
	int i, count = 0;

	printf("���ڿ�? ");
	gets(str, 255, stdin);
	int len = strlen(str);
	for(i=0; i<len; i++){
		if(isspace(str[i]))
			count++;
	}
	printf("���� ������ ����: %d\n", count);

	return 0;
}
