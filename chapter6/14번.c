//14번
#include <stdio.h>
int check_date(int year,int month,int day);
int is_leap_year(int year);

int main(void)
{
	int year,month,day;
	
	while(1){
		printf("날짜 (연 월 일)? ");
		scanf("%d %d %d", &year, &month, &day);
	
		if(check_date(is_leap_year(year),month,day)==1){
			printf("입력한 날짜는 %d년 %d월 %d일입니다.\n", year, month, day);
			break;
		}
		else{
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
			continue; 
		}
	}
	
	return 0;
}
int check_date(int year,int month,int day)
{  
	if(year==1 && month==2){
		if(day <= 29)
			return 1;
		else
			return 0;
	}
	else if(year==0 && month==2){
		if(day <= 28)
			return 1;
		else
			return 0;
	}
	else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		if(day <= 31)
			return 1;
		else
			return 0;
	}
	else if(month==4||month==6||month==9||month==11){
		if(day <= 30)
			return 1;
		else
			return 0;
	}
} 
int is_leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
