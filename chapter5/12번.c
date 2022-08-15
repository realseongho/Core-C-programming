//12번
#include <stdio.h>

int main(void)
{
	double seed, annual_interest, pre_seed;
	int i;
	
	printf("원금? ");
	scanf("%lf", &seed);
	printf("연이율(%%)? ");
	scanf("%lf", &annual_interest);
	
	for(i=1; i<=10; i++){
		pre_seed = seed;
		seed *= 1 + annual_interest*0.01;
		printf("%2d년째 이자: %.2f, 원리합계: %.2f\n", i, seed-pre_seed, seed);	
	}
	
	return 0;
} 
