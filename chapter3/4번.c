//4번 
#include <stdio.h>
#define amount_of_work power*distance

int main(void)
{
	double power, distance; // 데이터형이 int면 정수*정수여서 책처럼 소수점 자리가 나오지 않기 때문에 double형 사용 
	
	printf("power(N)? ");
	scanf("%lf", &power);
	printf("distance(m)? ");
	scanf("%lf", &distance);
	
	printf("amount of work: %.2f J\n", amount_of_work);
	
	return 0;
}
