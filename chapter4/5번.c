//5¹ø 
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	int radius, height;	
	double volume = 0;
	
	printf("radius? ");
	scanf("%d", &radius);
	printf("height? ");
	scanf("%d", &height);
	volume = PI * radius * radius * height;
	
	printf("cylinder volume: %f\n", volume);
	
	return 0;
}
