//4��
#include <stdio.h>
double discount_price(double price, double percentage);

int main(void)
{
	double price, percentage;
	
	printf("������(%%)? ");
	scanf("%lf", &percentage);
	while(1){
		printf("��ǰ�� ����? ");
		scanf("%lf", &price);
		if(price == 0)
			break;
		printf("���ΰ�: %.0f\n", discount_price(price, percentage));
	}
	
	return 0;
} 
double discount_price(double price, double percentage)
{
	percentage = (100-percentage)*0.01;
	
	return price*percentage; 	
}
