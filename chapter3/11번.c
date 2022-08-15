//11¹ø 
#include <stdio.h>
#define cal KRW/exchange_rate 

int main(void)
{
	int KRW;
	double exchange_rate;
	
	printf("KRW? ");
	scanf("%d", &KRW);
	printf("won/dollar exchange rate? ");
	scanf("%lf", &exchange_rate);
	
	printf("KRW %d = USD %.2f\n", KRW, cal);
	
	return 0;
}
