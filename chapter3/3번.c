//3¹ø 
#include <stdio.h>
#define potential_energy 9.8*mass*height

int main(void)
{
	int mass, height;
	
	printf("mass(kg)? ");
	scanf("%d", &mass);
	printf("height(m)? ");
	scanf("%d", &height);
	
	printf("potential energy: %f J\n", potential_energy);	
	
	return 0;
}
