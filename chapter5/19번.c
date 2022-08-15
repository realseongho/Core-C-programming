//19번
#include <stdio.h>

int main(void)
{
	int base_guarantee,BEP,per_fee,i,guest,total;
	
	printf("기본 출연료? ");
	scanf("%d", &base_guarantee);
	printf("손익 분기점 관객 수? ");
	scanf("%d", &BEP);
	printf("관객 1인당 러닝 개런티? ");
	scanf("%d", &per_fee);
	
	for(i=1; i<=15; i++){
		guest = i*1000000;
		total = base_guarantee+(guest-BEP)*per_fee;
		if(guest >= BEP)
			printf("관객 %d명 일 때 예상 출연료:%10d\n", guest, total);
		else
			printf("관객 %d명 일 때 예상 출연료:%10d\n", guest, base_guarantee);
	}
	
	return 0;
} 
