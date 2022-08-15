//14번
#include <stdio.h>

int main(void)
{
	int base_rate, month_usage;
	
	printf("base rate? ");
	scanf("%d", &base_rate);
	printf("month usage(KWh)? ");
	scanf("%d", &month_usage);
	 
	printf("Electricity bill: %dwon\n", base_rate + month_usage*190); // 기본요금 + 월사용량 * 190 
	
	return 0;
} 
