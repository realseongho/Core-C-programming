/*
	프로그램 내용 : 영문으로 된 이름을 입력받아 이니셜을 출력하는 프로그램
	실습일 : 2022.10.02
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	
	while (1) {
		char temp[5] = "";
		char* p = 0;
		char* q = 0;
		printf("영문 이름(.입력 시 종료)? ");
		gets(str, 100, stdin);
		p = str;
		q = temp;
		if (strncmp(str, ".", 1) == 0) break;
		*q = str[0];
		q++;
		while (1) {
			if (p = strchr(p, ' ')) { // bae_seong_ho
				*q = *(p + 1);
				q++, p++;
			}
			else break;
		}
		printf("이니셜: %s\n", _strupr(temp));
	}
	return 0;
}
