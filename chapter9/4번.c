/*
	프로그램 내용 : 문자열을 역순으로 만들어 출력하는 프로그램
	실습일 : 2022.10.01
	개발자 : 배성호 (201810674)
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

	printf("문자열? ");
	gets(str, 255, stdin);
	len = strlen(str);
	reverse_string(str, len);
	printf("역순으로 된 문자열: %s\n", str);

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
