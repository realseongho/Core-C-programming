/*
	���α׷� ���� : 9�� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
void fill_2d_array(int (*p)[5], int size);

int main(void)
{
	int arr[4][5];
	int (*p)[5] = &arr[0];
	
	fill_2d_array(p,4);

	return 0;
}
void fill_2d_array(int (*p)[5], int size)
{
	int i,j,src;
	
	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &src); 
	
	for(i=0; i<size; i++){
		for(j=0; j<5; j++){
			p[i][j] = src;
			printf("%d ",p[i][j]);			
		}
		printf("\n");
	}	
}
