//3��
#include <stdio.h>
void findMax(int arr[],int size);
void findMin(int arr[],int size);

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
	int i;
	
	printf("�迭:");
	for(i=0; i<10; i++){
		printf(" %d", arr[i]);
	}
	printf("\n");
	findMax(arr,10);
	findMin(arr,10);
	
	return 0;
} 
void findMax(int arr[],int size)
{
	int i, Max;
	Max = arr[0]; 
	for(i=1; i<size; i++)
		if(Max<arr[i])
			Max = arr[i];
	
	printf("�ִ�: %d\n", Max);
}
void findMin(int arr[],int size)
{
	int i, Min;
	Min = arr[0]; 
	for(i=1; i<size; i++)
		if(Min>arr[i])
			Min = arr[i];
	
	printf("�ּڰ�: %d\n", Min);
}
