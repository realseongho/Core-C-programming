/*
	���α׷� ���� : ���ڿ��� �������� ����� ����ϴ� ���α׷�
	�ǽ��� : 2022.10.01
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>
void reverse_string(char* str, int len);

int main(void)
{
	char str[255] = "";
	int len;

	printf("���ڿ�? ");
	gets(str, 255, stdin);
	len = strlen(str);
	reverse_string(str, len);
	printf("�������� �� ���ڿ�: %s\n", str);

	return 0;
}
void reverse_string(char* str, int len)
{
	char temp;
	int i;
	for (i = 0; i < len / 2; i++) {
		temp = str[i];
		str[i] = str[(len - 1) - i];
		str[(len - 1) - i] = temp;
	}
}
