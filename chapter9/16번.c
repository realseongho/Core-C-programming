/*
	���α׷� ���� : ������ ���̵�� �н����带 ����ϰ�, �α����� �����ϴ� ���α׷�
	�ǽ��� : 2022.10.03
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	const char* ID[5] = { "bae",	"kim",	"lee",	"choi",		"park" };
	const char* PW[5] = { "bae123","kim456","lee789","choi159","park753" };
	int number, count = 0;

	for (;;) {
		if (count > 3) {
			printf("3�� �ʰ� �α��� ����"); break;
		}
		char id[10] = "";
		char pw[10] = "";
		printf("ID: ");
		gets(id, 10, stdin);
		printf("PW: ");
		gets(pw, 10, stdin);
		for (number = 0; number < 5; number++)
			if (strcmp(id, ID[number]) == 0)
				break;
		if (number > 4) {
			printf("�ش� id�� �����ϴ�.\n");
			count++;continue;
		}
		if (strcmp(pw, PW[number]) == 0) {
			printf("\n�α��� ����!"); break;
		}
		else {
			printf("�н����尡 Ʋ�Ƚ��ϴ�.\n"); count++; continue;
		}
	}
	return 0;
}
