/*
	���α׷� ���� : �迭�� ���� �� �ִ񰪰� �ּڰ��� ã�� ����ϴ� ���α׷� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
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
	
	printf("�迭:");
	for(i=0; i<10; i++){
		printf(" %d",arr[i]);
		
		min = (min>arr[i])?arr[i]:min;
		max = (max>arr[i])?max:arr[i];
	}
	printf("\n�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
}
