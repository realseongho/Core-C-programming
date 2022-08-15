//14번
#include <stdio.h>

int main(void)
{
	double min,speed;
	int km;
	
	printf("구간 단속 소요 시간 (분)? ");
	scanf("%lf", &min);
	min /= 60; // km/h여서 시간단위로 변환 
	printf("구간 단속 주행 거리 (km)? ");
	scanf("%d", &km);
	speed = km/min; // 속력 = 거리 / 시간 
	
	if(speed >= 100)
		printf("평균 속력은 %.1f km/h입니다. 구간 단속 과속입니다.\n", speed);
	else
		printf(". . . ."); 
	
	return 0;
} 
