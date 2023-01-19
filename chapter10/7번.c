/*
	프로그램 내용 : 7번
	실습일 : 2022.10.16
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

enum month{Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
typedef struct date {
	int year;
	enum month m;
	int day;
}DATE;

void set_as_today(DATE* p);
void print_date_eng(DATE* p);
int main(void)
{
	DATE date = { 0 };
	set_as_today(&date);
	print_date_eng(&date);

	return 0;
}
void set_as_today(DATE* p)
{
	time_t t = time(NULL);
	struct tm* today = localtime(&t);
	p->year = today->tm_year + 1900;
	p->m = today->tm_mon;
	p->day = today->tm_mday;
}
void print_date_eng(DATE* p)
{
	printf("Today is");
	switch (p->m) {
	case 0:
		printf(" Jan");
		break;
	case 1:
		printf(" Feb");
		break;
	case 2:
		printf(" Mar");
		break;
	case 3:
		printf(" Apr");
		break;
	case 4:
		printf(" May");
		break;
	case 5:
		printf(" Jun");
		break;
	case 6:
		printf(" Jul");
		break;
	case 7:
		printf(" Aug");
		break;
	case 8:
		printf(" Sep");
		break;
	case 9:
		printf(" Oct");
		break;
	case 10:
		printf(" Nov");
		break;
	case 11:
		printf(" Dec");
		break;
	}
	printf(" %d %d\n", (*p).day, p->year);
}
