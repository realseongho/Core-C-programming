/*
	프로그램 내용 : 사전에 아이디와 패스워드를 등록하고, 로그인을 제어하는 프로그램
	실습일 : 2022.10.03
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	const char* ID[5] = { "bae",	"kim",	"lee",	"choi",		"park" };
	const char* PW[5] = { "bae123","kim456","lee789","choi159","park753" };
	int number, count = 0;

	for (;;) {
		if (count > 3) {
			printf("3번 초과 로그인 실패"); break;
		}
		char id[10] = "";
		char pw[10] = "";
		printf("ID: ");
		gets(id, 10, stdin);
		printf("PW: ");
		gets(pw, 10, stdin);
		for (number = 0; number < 5; number++)
			if (strcmp(id, ID[number]) == 0)
				break;
		if (number > 4) {
			printf("해당 id가 없습니다.\n");
			count++;continue;
		}
		if (strcmp(pw, PW[number]) == 0) {
			printf("\n로그인 성공!"); break;
		}
		else {
			printf("패스워드가 틀렸습니다.\n"); count++; continue;
		}
	}
	return 0;
}
