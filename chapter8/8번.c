/*
	프로그램 내용 : 포인터와 역참조 연산자를 사용하여 배열을 특정 값으로 채우는 함수를 만든 후 출력하는 프로그램 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void fill_array(int*,int,int);

int main(void)
{
	int arr[20] = {0};
	int src;
	int *p = arr;
	
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &src);
	
	fill_array(p,20,src);
	
	return 0;
}
void fill_array(int*p, int size, int src)
{
	int i;
	
	printf("배열:");
	for(i=0; i<size; i++){
		*(p+i) = src;
		printf(" %d", *(p+i));
	}
}
