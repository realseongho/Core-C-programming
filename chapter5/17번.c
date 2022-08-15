//17번
#include <stdio.h>

int main(void)
{
	int parking_time;
	
	printf("주차시간(분)? ");
	scanf("%d", &parking_time);
	
	if(parking_time <= 30)
		printf("주차 요금: 2000원");
	else if(parking_time > 30 && parking_time <= 250){
		if(parking_time%10==0)
			printf("주차 요금: %d원", 2000+(parking_time-30)*100);
		else{
			parking_time /= 10;
			parking_time *= 10;
			printf("주차 요금: %d원", 2000+(parking_time-30)*100+1000); 
		}
	}
	else if(parking_time > 250 && parking_time < 1440)
		printf("주차 요금: 25000원");
	else if(parking_time >= 1440)
		printf("주차 시간은 24시간을 넘을 수 없습니다.");			
	
	return 0;
} 
