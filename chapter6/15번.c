//15��
#include <stdio.h>
#include <math.h> //pow�� ����ϱ� ���� round�� �ݿø� �Ҷ� ����ϴ� ���̺귯�� �Լ� 
double round_pos(double target,int unit);

int main(void)
{
	double num;
	int i;
	
	printf("������ �Է��Ͻÿ� >> ");
	scanf("%lf", &num);
	
	for(i=1; i<=3; i++)
		printf("%d��° �ڸ����� �ݿø��� ���: %.0f\n", i, round_pos(num,i));
	
	return 0;
}
double round_pos(double target,int unit)
{
	target /= pow(10,unit);
	target = round(target) * pow(10,unit);
	
	return target;
}  
