//7��
#include <stdio.h>

int main(void)
{
	int kWh, bill = 0;
	
	printf("�� ��뷮 (kWh)? ");
	scanf("%d", &kWh);
	 
	if(kWh <= 200){
		bill =	910 + 93.3*kWh;
		printf("���� ��� �հ�: %7d��\n", bill);
		printf("  - �⺻ ���: %8d��\n", 910);
		printf("  - ���·����: %7d��\n", bill-910);
	}
	else if(kWh > 200 && kWh <= 400){
		bill = 1600 + 200*93.3 + (kWh-200)*187.9;
		printf("���� ��� �հ�: %7d��\n", bill);
		printf("  - �⺻ ���: %8d��\n", 1600);
		printf("  - ���·����: %7d��\n", bill-1600);
	}
	else if(kWh > 400){
		bill = 7300 + 200*93.9 + 200*187.9 + (kWh-400)*280.6;
		printf("���� ��� �հ�: %7d��\n", bill);
		printf("  - �⺻ ���: %8d��\n", 7300);
		printf("  - ���·����: %7d��\n", bill-7300);
	}
	
	return 0;
} 
