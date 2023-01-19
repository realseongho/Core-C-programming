/*
	프로그램 내용 : 입력받은 문자열에 대하여 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전한 결과를 출력하는 프로그램
	실습일 : 2022.10.03
	개발자 : 배성호 (201810674)
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
	
	printf("문자열? ");
	gets(str, 100, stdin);
	len = strlen(str);
	
	while (1) {
		char str2[100] = "";
		p = 0;
		printf("이동할 글자 수? ");
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
