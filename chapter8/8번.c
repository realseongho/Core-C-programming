/*
	���α׷� ���� : �����Ϳ� ������ �����ڸ� ����Ͽ� �迭�� Ư�� ������ ä��� �Լ��� ���� �� ����ϴ� ���α׷� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
void fill_array(int*,int,int);

int main(void)
{
	int arr[20] = {0};
	int src;
	int *p = arr;
	
	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &src);
	
	fill_array(p,20,src);
	
	return 0;
}
void fill_array(int*p, int size, int src)
{
	int i;
	
	printf("�迭:");
	for(i=0; i<size; i++){
		*(p+i) = src;
		printf(" %d", *(p+i));
	}
}
