#include <stdio.h>

int main(void)
{
	double i,number,mult,result=1;
	
	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &number);
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ�: ");
	scanf("%lf", &mult);
	
	for(i=0; i<mult; i++)
		result *= number;
	
	printf("������� %f\n",result);
	
	return 0;
}
