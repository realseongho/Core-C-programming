/*
	프로그램 내용 : 배열 원소를 가리키는 포인터를 이용해서 배열의 평균을 구하는 프로그램 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>

int main(void)
{
	double arr[10] = {0.1, 2, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2};
	double *p = &arr[0];
	double sum = 0;
	int i;
	
	printf("배열:");
	for(i=0; i<10; i++){
		printf("%6.2f",*(p+i));
		sum += *(p+i);
	}
	printf("\n평균:  %f\n",sum/10);
	
	return 0;
}
