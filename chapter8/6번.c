/*
	프로그램 내용 : 배열의 원소 중 최댓값과 최솟값을 찾아 출력하는 프로그램 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void get_min_max(int arr[],int size);

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};	 
	
	get_min_max(arr,10);
	
	return 0;
}
void get_min_max(int arr[],int size)
{
	int min=arr[0],max=arr[0],i;
	
	printf("배열:");
	for(i=0; i<10; i++){
		printf(" %d",arr[i]);
		
		min = (min>arr[i])?arr[i]:min;
		max = (max>arr[i])?max:arr[i];
	}
	printf("\n최댓값: %d\n", max);
	printf("최솟값: %d\n", min);
}
