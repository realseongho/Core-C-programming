/*
	���α׷� ���� : �迭 ���Ҹ� ����Ű�� �����͸� �̿��ؼ� �迭�� ����� ���ϴ� ���α׷� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>

int main(void)
{
	double arr[10] = {0.1, 2, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2};
	double *p = &arr[0];
	double sum = 0;
	int i;
	
	printf("�迭:");
	for(i=0; i<10; i++){
		printf("%6.2f",*(p+i));
		sum += *(p+i);
	}
	printf("\n���:  %f\n",sum/10);
	
	return 0;
}
