/*
	프로그램 내용 : 15번 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort_array(int *arr,int size);

int main(void)
{
	int i,arr[10] = {0};
	srand(time(NULL));
	
	printf("정렬 전:");
	for(i=0; i<10; i++){
		arr[i] = rand()%100;
		printf("%3d", arr[i]);
	}
	printf("\n정렬 후:");
	sort_array(arr, 10);
	for(i=0; i<10; i++)
		printf("%3d", arr[i]);	
	
	return 0;
}
void sort_array(int *arr,int size)
{
	int i, j, index, temp;
	
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
