//4�� 
#include <stdio.h>
#define amount_of_work power*distance

int main(void)
{
	double power, distance; // ���������� int�� ����*�������� åó�� �Ҽ��� �ڸ��� ������ �ʱ� ������ double�� ��� 
	
	printf("power(N)? ");
	scanf("%lf", &power);
	printf("distance(m)? ");
	scanf("%lf", &distance);
	
	printf("amount of work: %.2f J\n", amount_of_work);
	
	return 0;
}
