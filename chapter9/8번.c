/*
	���α׷� ���� : ���ڿ��� Ű ���� �Է� �޾� ��ȣȭ�� ���ڿ��� ����ϴ� ���α׷�
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
	int i, len, key;
	while (1) {
		printf("���ڿ�(. �Է� �� ����)? ");
		gets(str, 255, stdin);
		if (strcmp(str, ".") == 0) break;
		printf("��ȣ Ű(����)? ");
		scanf("%d", &key);
		len = strlen(str);
		for (i = 0; i < len; i++) {
			if (str[i] == ' ') continue;
			str[i] = str[i] + key;
		}
		while (getchar() != '\n');
		printf("��ȣȭ�� ���ڿ�: %s\n", str);
	}
	return 0;
}
