//11��
#include <stdio.h>
void calculator(double num1,char op,double num2); //�������� void�� �ؾ� ����ϰ� �������� 

int main(void)
{
	char op;
	double num1,num2;
	
	while(1){
		printf("���� (0 0 0 �Է� �� ����)? ");
		scanf("%lf %c %lf", &num1, &op, &num2);
		if(num1==0 && op=='0' && num2==0)
			break;
		calculator(num1,op,num2);
	}
	
	return 0;
}
void calculator(double num1,char op,double num2)
{
	switch(op){
		case '+':
			printf("%f\n", num1+num2);
			break;
		case '-':
			printf("%f\n", num1-num2);
			break;
		case '*':
			printf("%f\n", num1*num2);
			break;
		case '/':
			if(num2 == 0)
				printf("0���� ���� �� �����ϴ�.\n");
			else 
				printf("%f\n", num1/num2);
			break;
		default:
			printf("+,-,*,/ �̿��� ������ �������� �ʽ��ϴ�.\n");
			break;
	}
}
