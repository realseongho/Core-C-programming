/*
	프로그램 내용 : 15번
	실습일 : 2022.10.03
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int time_to_string(char str[], int size, int hh, int mm, int ss); // size 전달 안해도 된다고 생각함.

int main(void)
{
	char str[10] = "";
	int hh, mm, ss;
	do {
		printf("시 분 초? ");
		scanf("%d %d %d", &hh, &mm, &ss);
	} while (time_to_string(str, 10, hh, mm, ss) < 0);
	puts(str);

	return 0;
}
int time_to_string(char str[], int size, int hh, int mm, int ss)
{
	if (hh >= 0 && hh < 24 && mm >= 0 && mm < 60 && ss >= 0 && ss < 60) {
		sprintf(str, "%02d:%02d:%02d", hh, mm, ss);
		return strlen(str);
	}
	else
		return -1;
}
