#include <stdio.h>

int main(void)
{
	int seed, year=0, f_seed=0, choose;
	double year_interest;
	
	printf("������ �����ÿ� >> ");
	scanf("%d", &seed);
	printf("�� ����(%%)�� �����ÿ� >> ");
	scanf("%lf", &year_interest);	
	printf("1. ���� 2. �ܸ� >> ");
	scanf("%d", &choose); 
	
	f_seed = seed+1000000;
	
	if(choose == 1){
		year_interest = 1 + year_interest*0.01;
		while(seed < f_seed){ //���� 
			seed *= year_interest;
			year++;
		}
		printf("���ݿ� 100������ �߰��Ǵ� �ش� %d��°�� �����ϰ�\n���� %d����.\n", year, seed);
	}
	if(choose == 2){
		year_interest = seed * year_interest * 0.01;
		while(seed < f_seed){ //�ܸ� 
			seed += year_interest;
			year++;
		}
		printf("���ݿ� 100������ �߰��Ǵ� �ش� %d��°�� �����ϰ�\n���� %d����.\n", year, seed);
	}
	
	return 0;
} 
