/*
	프로그램 내용 : 7번
	실습일 : 2022.10.01
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void check_phone_str(void);

int main(void)
{
	check_phone_str();
	return 0;
}
void check_phone_str(void)
{
	char str[100] = "";
	int area, mid, last, i;
	while (1) {
		int len, check = 0;
		printf("전화번호(. 입력 시 종료)? ");
		gets(str, 100, stdin);
		len = strlen(str);
		if (strcmp(str, ".") == 0) break;
		for (i = 0; i < len; i++)
			if (isdigit(str[i]) == 0 || strncmp(str,"010",3) != 0 || len != 11)
				check++;
		//sscanf(str, "%03d %04d %04d", &area, &mid, &last);
		
		if (check > 0)
			printf("잘못 입력하셨습니다. 01012345678 형식으로 입력하세요.\n");
		else
			printf("%s는 유효한 전화번호입니다.\n", str);
	}
}
