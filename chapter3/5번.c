//5¹ø 
#include <stdio.h>
#define conversion_inch_to_cm inch*2.54 

int main(void)
{
	double inch;
	
	printf("length(inch)? ");
	scanf("%lf", &inch);
	
	printf("%f inch = %f cm\n", inch, conversion_inch_to_cm);
	
	return 0;
}
