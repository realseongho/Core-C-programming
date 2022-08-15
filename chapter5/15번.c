//15번
#include <stdio.h>

int main(void)
{
	double hour_bill, working_hour, days_a_month; 
	int choice;
	
	printf("시간당 급여? ");
	scanf("%lf", &hour_bill);
	printf("일일 근무 시간? ");
	scanf("%lf", &working_hour);
	printf("한달 근무 일수? ");
	scanf("%lf", &days_a_month);
	printf("세금 적용 여부 0:미적용, 1:4대보험공제(8.41%%), 2:소득세공제(3.3%%)? ");
	scanf("%d", &choice);
	
	switch(choice){
	case 0:
		printf("예상 월급여: %.0f\n", hour_bill*working_hour*days_a_month);
		break;
	case 1:
		printf("예상 월급여: %.0f\n", hour_bill*working_hour*days_a_month*0.9159); // 0.0841
		break;
	case 2:
		printf("예상 월급여: %.0f\n", hour_bill*working_hour*days_a_month*0.967); // 0.033
		break;	
	} 
	
	return 0;
} 
