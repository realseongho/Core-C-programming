/*
	프로그램 내용 : 3번
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
	char* p = 0;

	printf("문자열? ");
	gets(str, 255, stdin);
	p = str;
	while (*p != '\0') {
		if (islower(*p))
			*p = toupper(*p);
		else if (isupper(*p))
			*p = tolower(*p);
		p++;
	}
	printf("변환 후: %s\n", str);

	return 0;
}
