//3¹ø 
#include <stdio.h>
#define density mass/volume 
	
int main(void)
{
	double mass, volume;
	
	printf("mass(g)? ");
	scanf("%lf", &mass);
	printf("volume(cubic cm)? ");
	scanf("%lf", &volume);	
	
	printf("density: %f\n", density);
	
	return 0;
}
