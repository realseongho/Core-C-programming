//13번
#include <stdio.h>
int is_leap_year(int year);
void get_days_of_month(int year);

int main(void)
{
	int year;
	
	printf("연도? ");
	scanf("%d", &year);
	
	printf("[ %d년 ]\n", year);
	get_days_of_month(is_leap_year(year));
	
	return 0;
} 
int is_leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
void get_days_of_month(int year)
{
	printf(" 1월: 31일	"); // 1,3,5,7,8,10,12
	if(year==1)
		printf(" 2월: 29일	");
	else
		printf(" 2월: 28일	"); 
	printf(" 3월: 31일	");
	printf(" 4월: 30일	"); // 4,6,9,11
	printf(" 5월: 31일	");
	printf(" 6월: 30일\n");
	printf(" 7월: 31일	");
	printf(" 8월: 31일	");
	printf(" 9월: 30일	");
	printf("10월: 31일	");
	printf("11월: 30일	");
	printf("12월: 31일	");
}
