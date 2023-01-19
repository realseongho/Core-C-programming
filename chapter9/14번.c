/*
	프로그램 내용 : 아이디를 입력받아 유효한 아이디인지 검사하는 프로그램
	실습일 : 2022.10.03
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char id[100] = "";
	int i, len;
	while (1) {
		int PF = 0;
		printf("ID? ");
		gets(id, 100, stdin);
		len = strlen(id);
		if (isalpha(id[0]) == 0) {
			printf("ID는 영문자로 시작해야 합니다.\n");
			continue;
		}
		else if (len < 8) {
			printf("ID는 8자 이상이어야 합니다.\n");
			continue;
		}
		for (i = 0; i < len; i++)
			if (isalnum(id[i]) == 0) {
				printf("ID는 영문자와 숫자로만 구성되어야 합니다.\n");
				PF++;
				break;
			}
		if (PF == 0) {
			printf("%s는 ID로 사용할 수 있습니다!", id);
			break;
		}
	}
	return 0;
}
