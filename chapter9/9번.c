/*
	���α׷� ���� : ���� �̸��� Ȯ���ڸ� �Է� �޾� Ȯ���ڸ� ������ ���ϸ��� ����ϴ� ���α׷�
	�ǽ��� : 2022.10.01
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	char src[10] = "";

	printf("���ϸ�? ");
	gets(str, 100, stdin);
	printf("Ȯ����? ");
	scanf("%s", src);
	strcat(str, ".");
	strcat(str, src);
	printf("��ü ���ϸ�: %s\n", str);

	return 0;
}
