//6�� 
#include <stdio.h>
#define square_feet area*0.3025

int main(void)
{
	double area;
	
	printf("apartment's area(square meter)? ");
	scanf("%lf", &area);
	
	printf("%.2f �������� = %.2f ��\n", area, square_feet);
	
	return 0;
}
