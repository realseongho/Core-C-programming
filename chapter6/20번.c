//20번
#include <stdio.h>
int electric_charge(int kWh);

int main(void)
{
	int kWh;
	
	while(1){
		printf("월 사용량 (kWh)? ");
		scanf("%d", &kWh);
		if(kWh<=0)
			break;
		printf("전기 요금:%8d원\n", electric_charge(kWh));
	}	
	
	return 0;
}
int electric_charge(int kWh)
{
	double bill;
	if(kWh <= 200){
		bill =	910 + 93.3*kWh;
		return bill;
	}
	else if(kWh > 200 && kWh <= 400){
		bill = 1600 + 200*93.3 + (kWh-200)*187.9;
		return bill;
	}
	else if(kWh > 400){
		bill = 7300 + 200*93.3 + 200*187.9 + (kWh-400)*280.6;
		return bill;
	}
} 
