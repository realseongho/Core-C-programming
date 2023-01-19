/*
	프로그램 내용 : 파일 이름과 확장자를 입력 받아 확장자를 포함한 파일명을 출력하는 프로그램
	실습일 : 2022.10.01
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	char src[10] = "";

	printf("파일명? ");
	gets(str, 100, stdin);
	printf("확장자? ");
	scanf("%s", src);
	strcat(str, ".");
	strcat(str, src);
	printf("전체 파일명: %s\n", str);

	return 0;
}
