/*
	���α׷� ���� : DATE ����ü �迭�� �����Ͽ� �ش��ϴ� ��¥�� �ʱ�ȭ�ϰ�, DATE ����ü 2���� �Ű������� ���޹޾� is_same_date �Լ��� �����ϴ� ���α׷�
	�ǽ��� : 2022.10.15
	������ : �輺ȣ (201810674)
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
		printf("��¥(������)? ");
		scanf("%d %d %d", &(*p2).year, &p2->month, &p2->day);
		if (p2->year == 0 && p2->month == 0 && p2->day == 0)
			return 0;
		for (i = 0; i < 5; i++) {
			if (p1[i].year == p2->year && p1[i].month == p2->month && p1[i].day == p2->day) {
				flag = 0;
				printf("%d/%d/%d�� �������Դϴ�.\n", p2->year, p2->month, p2->day);
				break;
			}
		}
		if (flag)
			printf("%d/%d/%d�� �������� �ƴմϴ�.\n", p2->year, p2->month, p2->day);
	}
}
