//10��
//math.h��������� include�ؼ� ���̺귯���Լ� pow���� �����ٵ� �ݺ����� ����� �ؼ� 
#include <stdio.h>

int main(void)
{
	int i, unit, bill, divide=1;
	
	printf("�ݾ�? ");
	scanf("%d", &bill);
	printf("������� (10�� ������)? ");
	scanf("%d", &unit);
	
	for(i=0; i<unit; i++)
		divide *= 10;
	bill /= divide;
	bill *= divide;
	
	printf("�ݾ�(%d �̸� ����): %d\n", divide, bill);
	
	return 0;
} 
