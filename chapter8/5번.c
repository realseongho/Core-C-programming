/*
	���α׷� ���� : 5�� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
void arith_seq(int arr[],int size,int cd);

int main(void)
{
	int arr[10] = {0}, cd;
	
	printf("ù ��° ��? ");
	scanf("%d", &arr[0]);
	printf("����? ");
	scanf("%d", &cd);
	
	arith_seq(arr,10,cd);	
		
	return 0;
}
void arith_seq(int arr[],int size,int cd)
{
	int i;
	
	printf("��������: %d",arr[0]);
	for(i=1; i<size; i++){
		 arr[i] = arr[i-1] + cd;
		 printf(" %d",arr[i]);
	}
}
