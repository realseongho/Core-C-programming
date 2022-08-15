//13��
#include <stdio.h>
int is_leap_year(int year);
void get_days_of_month(int year);

int main(void)
{
	int year;
	
	printf("����? ");
	scanf("%d", &year);
	
	printf("[ %d�� ]\n", year);
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
	printf(" 1��: 31��	"); // 1,3,5,7,8,10,12
	if(year==1)
		printf(" 2��: 29��	");
	else
		printf(" 2��: 28��	"); 
	printf(" 3��: 31��	");
	printf(" 4��: 30��	"); // 4,6,9,11
	printf(" 5��: 31��	");
	printf(" 6��: 30��\n");
	printf(" 7��: 31��	");
	printf(" 8��: 31��	");
	printf(" 9��: 30��	");
	printf("10��: 31��	");
	printf("11��: 30��	");
	printf("12��: 31��	");
}
