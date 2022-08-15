//9¹ø 
#include <stdio.h>
#define conversion_lb_to_kg lb*0.45359237

int main(void)
{
	int lb;
	
	printf("weight(lb)? ");
	scanf("%d", &lb);
	
	printf("%d lb = %f kg\n", lb, conversion_lb_to_kg);
	
	return 0;
}
