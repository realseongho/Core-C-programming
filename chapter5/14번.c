//14��
#include <stdio.h>

int main(void)
{
	double min,speed;
	int km;
	
	printf("���� �ܼ� �ҿ� �ð� (��)? ");
	scanf("%lf", &min);
	min /= 60; // km/h���� �ð������� ��ȯ 
	printf("���� �ܼ� ���� �Ÿ� (km)? ");
	scanf("%d", &km);
	speed = km/min; // �ӷ� = �Ÿ� / �ð� 
	
	if(speed >= 100)
		printf("��� �ӷ��� %.1f km/h�Դϴ�. ���� �ܼ� �����Դϴ�.\n", speed);
	else
		printf(". . . ."); 
	
	return 0;
} 
