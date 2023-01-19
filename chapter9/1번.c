/*
	프로그램 내용 : 1번
	실습일 : 2022.09.30
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main(void)
{
	char str[255] = "";
	int i, count = 0;

	printf("문자열? ");
	gets(str, 255, stdin);
	int len = strlen(str);
	for(i=0; i<len; i++){
		if(isspace(str[i]))
			count++;
	}
	printf("공백 문자의 갯수: %d\n", count);

	return 0;
}
