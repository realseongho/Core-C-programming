#include <stdio.h>

int main(void)
{
	int seed, year=0, f_seed=0, choose;
	double year_interest;
	
	printf("원금을 적으시오 >> ");
	scanf("%d", &seed);
	printf("연 이율(%%)을 적으시오 >> ");
	scanf("%lf", &year_interest);	
	printf("1. 복리 2. 단리 >> ");
	scanf("%d", &choose); 
	
	f_seed = seed+1000000;
	
	if(choose == 1){
		year_interest = 1 + year_interest*0.01;
		while(seed < f_seed){ //복리 
			seed *= year_interest;
			year++;
		}
		printf("원금에 100만원이 추가되는 해는 %d년째에 도달하고\n최종 %d원임.\n", year, seed);
	}
	if(choose == 2){
		year_interest = seed * year_interest * 0.01;
		while(seed < f_seed){ //단리 
			seed += year_interest;
			year++;
		}
		printf("원금에 100만원이 추가되는 해는 %d년째에 도달하고\n최종 %d원임.\n", year, seed);
	}
	
	return 0;
} 
