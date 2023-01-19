/*
	프로그램 내용 : 문자열과 키 값을 입력 받아 암호화된 문자열을 출력하는 프로그램
	실습일 : 2022.10.01
	개발자 : 배성호 (201810674)
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
		printf("문자열(. 입력 시 종료)? ");
		gets(str, 255, stdin);
		if (strcmp(str, ".") == 0) break;
		printf("암호 키(정수)? ");
		scanf("%d", &key);
		len = strlen(str);
		for (i = 0; i < len; i++) {
			if (str[i] == ' ') continue;
			str[i] = str[i] + key;
		}
		while (getchar() != '\n');
		printf("암호화된 문자열: %s\n", str);
	}
	return 0;
}
