//12��
#include <stdio.h>

int main(void)
{
	double seed, annual_interest, pre_seed;
	int i;
	
	printf("����? ");
	scanf("%lf", &seed);
	printf("������(%%)? ");
	scanf("%lf", &annual_interest);
	
	for(i=1; i<=10; i++){
		pre_seed = seed;
		seed *= 1 + annual_interest*0.01;
		printf("%2d��° ����: %.2f, �����հ�: %.2f\n", i, seed-pre_seed, seed);	
	}
	
	return 0;
} 
