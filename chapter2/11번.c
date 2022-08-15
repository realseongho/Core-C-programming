//11번
#include <stdio.h>

int main(void)
{
	double pi = 3.14159265; // float형일땐 소수점 이하 8자리 출력 시 값이 조금 바뀜. 
	
	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi); 
	
	return 0;
} 
