/*
	���α׷� ���� : 5��
	�ǽ��� : 2022.10.01
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>
int strcmp_ic(char* lhs, char* rhs, int len);

int main(void)
{
	char str1[255] = "";
	char str2[255] = "";
	int len;

	printf("ù ��° ���ڿ� ? ");
	gets(str1, 255, stdin);
	printf("�� ��° ���ڿ� ? ");
	gets(str2, 255, stdin);
	len = strlen(str1);
	if (strcmp_ic(str1, str2, len) == 0)
		printf("%s�� %s�� �����ϴ�.\n", str1, str2);
	else
		printf("%s�� %s�� ���� �ʽ��ϴ�.\n", str1, str2);

	return 0;
}
int strcmp_ic(char* lhs, char* rhs, int len)
{
	int i;
	char dest_l[255] = "";
	char dest_r[255] = "";
	strcpy(dest_l, lhs);
	strcpy(dest_r, rhs);
	for (i = 0; i < len; i++) {
		dest_l[i] = tolower(dest_l[i]);
		dest_r[i] = tolower(dest_r[i]);
	}
	return strcmp(dest_l, dest_r);
}
