/*
	���α׷� ���� : 3�� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>

int main(void)
{
	int arr[10] = {44,32,65,23,45,76,77,89,23,45};
	int *p = &arr[0];
	int i;
	
	printf("�迭:"); 
	for(i=0; i<10; i++)
		printf("%4d",*(p+i));
	
	p = &arr[9];
	printf("\n����:"); 
	for(i=0; i<10; i++)
		printf("%4d",*(p-i));
	
	return 0;
}
