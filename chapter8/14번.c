/*
	프로그램 내용 : 사용자 정의 랜덤수 생성 함수로 0~9사이의 수를 생성한 후 그 횟수만큼 크기가 10인 배열에 랜덤수를 저장하여 출력하는 프로그램 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rand_array(int *a, int size, int max);

int main(void)
{
	int i, j, count, arr[10]={0};
	srand(time(NULL));
	
	rand_array(&count, 1, 10);
	printf("count = %d\n", count);
	for(i=0; i<count; i++){
		rand_array(arr, 10, 100);
		for(j=0; j<10; j++)
			printf("%2d ", arr[j]);
		printf("\n");	
	} 
	
	return 0;
}
void rand_array(int *a, int size, int max)
{
	int i;
	
	for(i=0; i<size; i++)
		a[i] = rand()%max; 
}
