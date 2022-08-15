//11¹ø
#include <stdio.h>

int main(void)
{
	int price, discount_per, sale_amount = 0;
	
	printf("product's price? ");
	scanf("%d", &price);
	printf("discount percent(%%)? ");
	scanf("%d", &discount_per);
	sale_amount = price * 0.01*discount_per;
	
	printf("sale price: %dwon (%dwon discount)\n", price - sale_amount, sale_amount);
	
	return 0;
} 
