//2번
#include <stdio.h>
double get_area_of_square(double side);

int main(void)
{
	double side;
	
	printf("한 변의 길이? ");
	scanf("%lf", &side);
	
	printf("정사각형의 면적: %lf\n", get_area_of_square(side));	
	
	return 0;
} 
double get_area_of_square(double side)
{
	return side*side;
} 
