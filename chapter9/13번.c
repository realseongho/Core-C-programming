/*
	���α׷� ���� : 13��
	�ǽ��� : 2022.10.03
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	const char* str[] = {
		"Live Photo�� ��ƿ �̹����� ������ �� �ֽ��ϴ�.",
		"��ũ�� Ÿ�ӿ��� iPhone�� �Ϸ� ��� �ð��� Ȯ���� �� �ֽ��ϴ�.",
		"������ : �輺ȣ"
	};
	int n;
	srand(time(NULL));
	printf("����Ű�� ���� ������ ��� ���� �����ݴϴ�.\n");
	while (getchar() != EOF) {
		n = rand() % 3;
		printf("%s\n", str[n]);
	}

	return 0;
}
