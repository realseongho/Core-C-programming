//2��
#include <stdio.h>
double get_area_of_square(double side);

int main(void)
{
	double side;
	
	printf("�� ���� ����? ");
	scanf("%lf", &side);
	
	printf("���簢���� ����: %lf\n", get_area_of_square(side));	
	
	return 0;
} 
double get_area_of_square(double side)
{
	return side*side;
} 
