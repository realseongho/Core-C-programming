//15¹ø
#include <stdio.h>
#define commission 0.0175

int main(void)
{
	double exchange_rate, preferential_rate,sales_standard_rate,USD;
	
	printf("won/dollar sales standard rate? ");
	scanf("%lf", &sales_standard_rate);
	printf("preferential rate? ");
	scanf("%lf", &preferential_rate);
	preferential_rate *= 0.01;
	exchange_rate = sales_standard_rate + (sales_standard_rate * commission*(1-preferential_rate));
	
	printf("exchange rate when you buy dollar is %f.\n", exchange_rate);
	printf("dollars amount to exchange? ");
	scanf("%lf", &USD);
	
	printf("USD %.2f ==> KRW %.2f\n", USD, USD*exchange_rate); 
	
	return 0;
} 
