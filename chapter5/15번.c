//15��
#include <stdio.h>

int main(void)
{
	double hour_bill, working_hour, days_a_month; 
	int choice;
	
	printf("�ð��� �޿�? ");
	scanf("%lf", &hour_bill);
	printf("���� �ٹ� �ð�? ");
	scanf("%lf", &working_hour);
	printf("�Ѵ� �ٹ� �ϼ�? ");
	scanf("%lf", &days_a_month);
	printf("���� ���� ���� 0:������, 1:4�뺸�����(8.41%%), 2:�ҵ漼����(3.3%%)? ");
	scanf("%d", &choice);
	
	switch(choice){
	case 0:
		printf("���� ���޿�: %.0f\n", hour_bill*working_hour*days_a_month);
		break;
	case 1:
		printf("���� ���޿�: %.0f\n", hour_bill*working_hour*days_a_month*0.9159); // 0.0841
		break;
	case 2:
		printf("���� ���޿�: %.0f\n", hour_bill*working_hour*days_a_month*0.967); // 0.033
		break;	
	} 
	
	return 0;
} 
