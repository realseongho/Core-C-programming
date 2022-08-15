//11번
#include <stdio.h>
void calculator(double num1,char op,double num2); //리턴형을 void로 해야 깔끔하게 나오더라 

int main(void)
{
	char op;
	double num1,num2;
	
	while(1){
		printf("수식 (0 0 0 입력 시 종료)? ");
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
				printf("0으로 나눌 수 없습니다.\n");
			else 
				printf("%f\n", num1/num2);
			break;
		default:
			printf("+,-,*,/ 이외의 수식은 지원하지 않습니다.\n");
			break;
	}
}
