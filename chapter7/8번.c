//8번
#include <stdio.h>

int main(void)
{
	int o_price[5] = {0};
	int s_price[5] = {0};	
	int i;
	double discount_rate;
	
	printf("상품가 5개를 입력하세요:\n");
	for(i=0; i<5; i++)
		scanf("%d", &o_price[i]);
	
	printf("할인율(%%)? ");
	scanf("%lf", &discount_rate);
	discount_rate = 1 - discount_rate*0.01;
	
	for(i=0; i<5; i++){
		s_price[i] = o_price[i]*discount_rate;
		printf("가격:%7d --> 할인가:%7d\n", o_price[i], s_price[i]);
	}
	
	return 0;
} 
