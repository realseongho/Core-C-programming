//10¹ø 
#include <stdio.h>
#define cal exchange_rate*USD

int main(void)
{
	double USD, exchange_rate;
	
	printf("USD? ");
	scanf("%lf", &USD);
	printf("won/dollar exchange rate? ");
	scanf("%lf", &exchange_rate);
	
	printf("USD %.2f = KRW %.2f\n", USD, cal);
	
	return 0;
}
