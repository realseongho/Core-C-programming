/*
	���α׷� ���� : �Է¹��� ���ڿ��� ���Ͽ� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ���� ����� ����ϴ� ���α׷�
	�ǽ��� : 2022.10.03
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	char* p = 0;
	int len, amount;
	
	printf("���ڿ�? ");
	gets(str, 100, stdin);
	len = strlen(str);
	
	while (1) {
		char str2[100] = "";
		p = 0;
		printf("�̵��� ���� ��? ");
		scanf("%d", &amount);
		if (amount > 0) {
			p = &str[len - amount];
			strcpy(str2, p);
			strncat(str2, str, len - amount);
			strcpy(str, str2);
			puts(str);
		}
		else if (amount < 0) {
			p = &str[-amount];
			strcpy(str2, p);
			strncat(str2, str, -amount);
			strcpy(str, str2);
			puts(str);
		}
		else
			break;
	}
	return 0;
}
