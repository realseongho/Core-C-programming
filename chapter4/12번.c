//12��
#include <stdio.h>

int main(void)
{
	double distance_to_destination, predicted_speed; // �ð� = �Ÿ� / �ӷ� 
	int time;
	
	printf("distance to destination(km)? ");
	scanf("%lf", &distance_to_destination);
	printf("predicted speed(km/h)? "); // �ҿ�ð��� �� ������ ����ؾ� �ϱ� ������ ���� �� ���ش�. 
	scanf("%lf", &predicted_speed);
	predicted_speed /= 60; // �� ������ �ٲپ��� ������ ���� ������ �и�� �״�� ���� ��. 
	time = distance_to_destination / predicted_speed;
	
	printf("predicted taken time until arrive is %dmin.\n", time);
	
	return 0;
} 
