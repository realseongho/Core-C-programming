//12번
#include <stdio.h>
int is_leap_year(int year);

int main(void)
{
	int year,finish,line=0;
	
	printf("몇년부터 몇년사이에 있는 윤년을 구해줄까요? ");
	scanf("%d %d", &year, &finish);
	if(finish<year){
		printf("뒤에 연도를 크게 적으십시오 >> ");
		scanf("%d %d", &year, &finish);} 
	for(year; year<=finish; year++){
		if(is_leap_year(year)==1){
			printf(" %d", year);
			line++;}
		else
			continue;
		if(line==10){
			printf("\n");
			line = 0;	
		}
	}
	
	return 0;
}
int is_leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
