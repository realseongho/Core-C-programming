/*
	���α׷� ���� : ũ�Ⱑ 3�� double�� �迭�� ��� ������ �ּҸ� ����ϴ� ���α׷� 
	�ǽ��� : 2022.09.25
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>

int main(void)
{
	double x[3] = {0};
	int i;
	
	for(i=0; i<3; i++)
		printf("x[%d]�� �ּ�: %p\n", i, x+i);
	
	return 0;
}
