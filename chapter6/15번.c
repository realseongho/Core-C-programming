//15번
#include <stdio.h>
#include <math.h> //pow를 사용하기 위해 round는 반올림 할때 사용하는 라이브러리 함수 
double round_pos(double target,int unit);

int main(void)
{
	double num;
	int i;
	
	printf("정수를 입력하시오 >> ");
	scanf("%lf", &num);
	
	for(i=1; i<=3; i++)
		printf("%d번째 자리에서 반올림한 결과: %.0f\n", i, round_pos(num,i));
	
	return 0;
}
double round_pos(double target,int unit)
{
	target /= pow(10,unit);
	target = round(target) * pow(10,unit);
	
	return target;
}  
