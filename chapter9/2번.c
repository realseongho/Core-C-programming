/*
	���α׷� ���� : ���� �迭�� �Ű������� ���޹޾� ������ �����ϴ� �Լ��� �ۼ��ϴ� ���α׷�
	�ǽ��� : 2022.10.01
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>
void remove_space(char* str);

int main(void)
{
	char str[255] = "";
	printf("���ڿ�? ");
	fgets(str, 255, stdin);
	remove_space(str);
	printf("���� ���� ���� ��: %s\n", str);

	return 0;
}
void remove_space(char* str)
{
	char* p = 0;
	for (p = str; *p != '\0'; p++) {
		if (isspace(*p)) {
			char* q = 0;
			for (q = p + 1; *q != 0; q++)
				*(q - 1) = *q;
			*(q - 1) = 0;
		}
	}
}
