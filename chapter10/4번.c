/*
	���α׷� ���� : �������� ��Ÿ���� DATE ����ü�� print_date �Լ��� �ۼ��ϴ� ���α׷�
	�ǽ��� : 2022.10.15
	������ : �輺ȣ (201810674)
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

	printf("��? ");
	scanf("%d", &ymd.year);
	printf("��? ");
	scanf("%d", &ymd.month);
	printf("��? ");
	scanf("%d", &ymd.day);
	print_date(&ymd);

	return 0;
}
void print_date(const DATE* p)
{
	printf("%d/%d/%d", p->year, p->month, p->day);
}
