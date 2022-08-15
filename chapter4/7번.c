//7¹ø 
#include <stdio.h>
#include <math.h> 

int main(void)
{
	int a, b;
	double c = 0;
	
	printf("base length? ");
	scanf("%d", &a);
	printf("height length? ");
	scanf("%d", &b);
	c = sqrt(a*a + b*b);
	
	printf("length of c: %f\n", c);	
	
	return 0;
}
