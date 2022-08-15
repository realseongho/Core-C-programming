//7¹ø 
#include <stdio.h>
#define squared actual_number*actual_number
#define cubic actual_number*actual_number*actual_number

int main(void)
{
	double actual_number;
	
	printf("actual number? ");
	scanf("%lf", &actual_number);
	
	printf("squared: %e\n", squared);
	printf("cubic: %e\n", cubic);
	
	return 0;
}
