#include <stdio.h>

int main(void)
{
	double i,number,mult,result=1;
	
	printf("실수의 값을 입력하시오: ");
	scanf("%lf", &number);
	printf("거듭제곱횟수를 입력하시오: ");
	scanf("%lf", &mult);
	
	for(i=0; i<mult; i++)
		result *= number;
	
	printf("결과값은 %f\n",result);
	
	return 0;
}
