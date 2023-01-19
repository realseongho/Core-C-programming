/*
	프로그램 내용 : 연월일을 나타내는 DATE 구조체와 print_date 함수를 작성하는 프로그램
	실습일 : 2022.10.15
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct dt {
	int year;
	int month;
	int day;
}DATE;
void print_date(const DATE* p);

int main(void)
{
	DATE ymd = { 0 };

	printf("연? ");
	scanf("%d", &ymd.year);
	printf("월? ");
	scanf("%d", &ymd.month);
	printf("일? ");
	scanf("%d", &ymd.day);
	print_date(&ymd);

	return 0;
}
void print_date(const DATE* p)
{
	printf("%d/%d/%d", p->year, p->month, p->day);
}
