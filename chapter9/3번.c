/*
	���α׷� ���� : 3��
	�ǽ��� : 2022.10.01
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main(void)
{
	char str[255] = "";
	char* p = 0;

	printf("���ڿ�? ");
	gets(str, 255, stdin);
	p = str;
	while (*p != '\0') {
		if (islower(*p))
			*p = toupper(*p);
		else if (isupper(*p))
			*p = tolower(*p);
		p++;
	}
	printf("��ȯ ��: %s\n", str);

	return 0;
}
