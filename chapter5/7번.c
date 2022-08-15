//7번
#include <stdio.h>

int main(void)
{
	int kWh, bill = 0;
	
	printf("월 사용량 (kWh)? ");
	scanf("%d", &kWh);
	 
	if(kWh <= 200){
		bill =	910 + 93.3*kWh;
		printf("전기 요금 합계: %7d원\n", bill);
		printf("  - 기본 요금: %8d원\n", 910);
		printf("  - 전력량요금: %7d원\n", bill-910);
	}
	else if(kWh > 200 && kWh <= 400){
		bill = 1600 + 200*93.3 + (kWh-200)*187.9;
		printf("전기 요금 합계: %7d원\n", bill);
		printf("  - 기본 요금: %8d원\n", 1600);
		printf("  - 전력량요금: %7d원\n", bill-1600);
	}
	else if(kWh > 400){
		bill = 7300 + 200*93.9 + 200*187.9 + (kWh-400)*280.6;
		printf("전기 요금 합계: %7d원\n", bill);
		printf("  - 기본 요금: %8d원\n", 7300);
		printf("  - 전력량요금: %7d원\n", bill-7300);
	}
	
	return 0;
} 
