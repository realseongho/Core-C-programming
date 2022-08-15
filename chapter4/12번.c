//12번
#include <stdio.h>

int main(void)
{
	double distance_to_destination, predicted_speed; // 시간 = 거리 / 속력 
	int time;
	
	printf("distance to destination(km)? ");
	scanf("%lf", &distance_to_destination);
	printf("predicted speed(km/h)? "); // 소요시간을 분 단위로 출력해야 하기 때문에 따로 손 봐준다. 
	scanf("%lf", &predicted_speed);
	predicted_speed /= 60; // 분 단위로 바꾸었기 때문에 이제 계산식의 분모로 그대로 들어가면 됨. 
	time = distance_to_destination / predicted_speed;
	
	printf("predicted taken time until arrive is %dmin.\n", time);
	
	return 0;
} 
