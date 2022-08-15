//1¹ø 
#include <stdio.h>
#define kinetic_energy 0.5*mass*speed*speed 

int main(void)
{
	double mass, speed;
	
	printf("mass(kg)? ");
	scanf("%lf", &mass);
	printf("speed(m/s)? ");
	scanf("%lf", &speed);
	
	printf("kinetic energy: %.2f J\n", kinetic_energy);	
	
	return 0;
}
