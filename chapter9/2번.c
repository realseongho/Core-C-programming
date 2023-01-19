/*
	프로그램 내용 : 문자 배열을 매개변수로 전달받아 공백을 제거하는 함수를 작성하는 프로그램
	실습일 : 2022.10.01
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>
void remove_space(char* str);

int main(void)
{
	char str[255] = "";
	printf("문자열? ");
	fgets(str, 255, stdin);
	remove_space(str);
	printf("공백 문자 제거 후: %s\n", str);

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
