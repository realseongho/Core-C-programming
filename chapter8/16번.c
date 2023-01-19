/*
	프로그램 내용 : 배열에 임의의 정수를 채운 후 오름차,내림차 정렬 결과를 모두 출력하는 프로그램 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ASCENDING 0
#define DESCENDING 1
void sort_array_with_order(int *arr,int size,int order);

int main(void)
{
	int i,arr[10] = {0};
	srand(time(NULL));
	
	printf("정렬 전\t\t:");
	for(i=0; i<10; i++){
		arr[i] = rand()%100;
		printf("%3d", arr[i]);
	}
	printf("\n오름차순 정렬 후:");
	sort_array_with_order(arr, 10, ASCENDING);
	for(i=0; i<10; i++)
		printf("%3d", arr[i]);
	printf("\n내림차순 정렬 후:");
	sort_array_with_order(arr, 10, DESCENDING);
	for(i=0; i<10; i++)
		printf("%3d", arr[i]);	
	
	return 0;
}
void sort_array_with_order(int *arr,int size,int order)
{
	int i, j, index, temp;
	if(order==1){
		for(i=0; i<size-1; i++){
			index = i;
			for(j=i+1; j<size; j++){
				if(arr[index]<arr[j]){
					temp = arr[index];
					arr[index] = arr[j];
					arr[j] = temp;
				}
			}	
		}
	}
	else if(order == 0){
		for(i=0; i<size-1; i++){
			index = i;
			for(j=i+1; j<size; j++){
				if(arr[index]>arr[j]){
					temp = arr[index];
					arr[index] = arr[j];
					arr[j] = temp;
				}
			}	
		}
	}
}
