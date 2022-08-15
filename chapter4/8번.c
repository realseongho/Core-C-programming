//8¹ø 
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(void)
{
	int radius;
	double sphere_volume = 0;
	
	printf("radius? ");
	scanf("%d", &radius);
	sphere_volume = 4.0 / 3 * PI * pow(radius,3);
	
	printf("sphere volume: %f\n", sphere_volume);	
	
	return 0;
}
