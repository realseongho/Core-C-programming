/*
	���α׷� ���� : 5��
	�ǽ��� : 2022.10.15
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
typedef struct dt {
	int year;
	int month;
	int day;
}DATE;
void set_as_today(DATE* p);
void print_date(const DATE* p);

int main(void)
{
	DATE yymmdd = { 0 };
	set_as_today(&yymmdd);
	print_date(&yymmdd);

	return 0;
}
void set_as_today(DATE* p)
{
	time_t t = time(NULL);
	struct tm* today = localtime(&t);
	p->year = today->tm_year + 1900;
	p->month = today->tm_mon + 1;
	p->day = today->tm_mday;
}
void print_date(const DATE* p)
{
	printf("���� ��¥�� %d/%d/%d �Դϴ�.", p->year, p->month, p->day);
}
