//8번
#include <stdio.h>

int main(void)
{
	float num1, num2;
	
	printf("실수 2개? ");
	scanf("%f %f", &num1, &num2);
	
	printf("%f + %f = %f\n", num1, num2, num1+num2);
	printf("%f - %f = %f\n", num1, num2, num1-num2);	
	
	return 0;	
} 
