/*
	���α׷� ���� : �迭�� ������ ������ ä�� �� ������,������ ���� ����� ��� ����ϴ� ���α׷� 
	�ǽ��� : 2022.09.26
	������ : �輺ȣ (201810674) 
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
	
	printf("���� ��\t\t:");
	for(i=0; i<10; i++){
		arr[i] = rand()%100;
		printf("%3d", arr[i]);
	}
	printf("\n�������� ���� ��:");
	sort_array_with_order(arr, 10, ASCENDING);
	for(i=0; i<10; i++)
		printf("%3d", arr[i]);
	printf("\n�������� ���� ��:");
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
