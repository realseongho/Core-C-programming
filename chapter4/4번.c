//4¹ø 
#include <stdio.h>

int main(void)
{
	int solvent_mass, solute_mass;
	double solution_density = 0;
	
	printf("solvent mass(g)? ");
	scanf("%d", &solvent_mass);
	printf("solute mass(g)? ");
	scanf("%d", &solute_mass);
	solution_density = (double)solute_mass / (solvent_mass + solute_mass) * 100;
	
	printf("solution density: %.2f %%\n", solution_density);	
	
	return 0;
}
