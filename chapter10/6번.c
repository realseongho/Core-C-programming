/*
	프로그램 내용 : DATE 구조체 배열을 공휴일에 해당하는 날짜로 초기화하고, DATE 구조체 2개를 매개변수로 전달받아 is_same_date 함수를 정의하는 프로그램
	실습일 : 2022.10.15
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef struct dt {
	int year;
	int month;
	int day;
}DATE;
void is_same_date(const DATE* p1, DATE* p2);

int main(void)
{
	const DATE holiday[5] = { {2022,1,1},{2022,5,10},{2022,5,22},{2022,3,1},{2022,12,25} };
	DATE cmp = { 0 };

	is_same_date(holiday, &cmp);

	return 0;
}
void is_same_date(const DATE* p1, DATE* p2)
{
	while (1) {
		int i, flag = 1;
		printf("날짜(연월일)? ");
		scanf("%d %d %d", &(*p2).year, &p2->month, &p2->day);
		if (p2->year == 0 && p2->month == 0 && p2->day == 0)
			return 0;
		for (i = 0; i < 5; i++) {
			if (p1[i].year == p2->year && p1[i].month == p2->month && p1[i].day == p2->day) {
				flag = 0;
				printf("%d/%d/%d은 공휴일입니다.\n", p2->year, p2->month, p2->day);
				break;
			}
		}
		if (flag)
			printf("%d/%d/%d은 공휴일이 아닙니다.\n", p2->year, p2->month, p2->day);
	}
}
