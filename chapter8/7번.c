/*
	���α׷� ���� : 7�� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
void print_array(double arr[], int size);
void reverse_array(double arr[], int size);
int count = 1;

int main(void)
{
	double arr[10] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
	
	print_array(arr,10);	
	reverse_array(arr,10);
	print_array(arr,10);
	
	return 0;
}
void print_array(double arr[], int size)
{
	int i;
	if(count>1)
		printf("\n����:");
	else
		printf("�迭:");
	for(i=0; i<size; i++)
		printf(" %.1f", arr[i]);
	count++; 
}
void reverse_array(double arr[], int size)
{
	double arr2[size]; 
	int i;
	
	for(i=0; i<size; i++){
		arr2[size-1-i] = arr[i]; 
	}
	for(i=0; i<size; i++){
		arr[i] = arr2[i]; 
	}
}
