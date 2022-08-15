//2¹ø 
#include <stdio.h>
#define conversion_Ftem_to_Ctem (Ftem-32)*5.0/9.0

int main(void)
{
	double Ftem;	
	
	printf("F Temperature? ");
	scanf("%lf", &Ftem);
	
	printf("%.2f F = %.2f C\n", Ftem, conversion_Ftem_to_Ctem);
	
	return 0;
}
