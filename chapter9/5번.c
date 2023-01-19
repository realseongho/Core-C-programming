/*
	프로그램 내용 : 5번
	실습일 : 2022.10.01
	개발자 : 배성호 (201810674)
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

	printf("첫 번째 문자열 ? ");
	gets(str1, 255, stdin);
	printf("두 번째 문자열 ? ");
	gets(str2, 255, stdin);
	len = strlen(str1);
	if (strcmp_ic(str1, str2, len) == 0)
		printf("%s와 %s가 같습니다.\n", str1, str2);
	else
		printf("%s와 %s는 같지 않습니다.\n", str1, str2);

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
