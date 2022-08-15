//4번
#include <stdio.h>
double discount_price(double price, double percentage);

int main(void)
{
	double price, percentage;
	
	printf("할인율(%%)? ");
	scanf("%lf", &percentage);
	while(1){
		printf("재품의 가격? ");
		scanf("%lf", &price);
		if(price == 0)
			break;
		printf("할인가: %.0f\n", discount_price(price, percentage));
	}
	
	return 0;
} 
double discount_price(double price, double percentage)
{
	percentage = (100-percentage)*0.01;
	
	return price*percentage; 	
}
