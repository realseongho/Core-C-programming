/*
	프로그램 내용 : 크기가 3인 double형 배열의 모든 원소의 주소를 출력하는 프로그램 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>

int main(void)
{
	double x[3] = {0};
	int i;
	
	for(i=0; i<3; i++)
		printf("x[%d]의 주소: %p\n", i, x+i);
	
	return 0;
}
