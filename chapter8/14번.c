/*
	���α׷� ���� : ����� ���� ������ ���� �Լ��� 0~9������ ���� ������ �� �� Ƚ����ŭ ũ�Ⱑ 10�� �迭�� �������� �����Ͽ� ����ϴ� ���α׷� 
	�ǽ��� : 2022.09.26
	������ : �輺ȣ (201810674) 
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
