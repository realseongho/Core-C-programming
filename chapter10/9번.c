/*
	���α׷� ���� : 9��
	�ǽ��� : 2022.10.16
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct product {
	char name[20];
	int price;
	int rest;
}PRODUCT;

int order(PRODUCT* p,int amount);
int main(void)
{
	PRODUCT info = { 0 };
	int pay=0,amount=0;
	printf("��ǰ��? ");
	scanf("%s", info.name);
	printf("����? ");
	scanf("%d", &info.price);
	printf("���? ");
	scanf("%d", &info.rest);

	while (1) {
		printf("�ֹ� ����? ");
		scanf("%d", &amount);
		if (amount == 0)
			break;
		if (pay = order(&info, amount)) {
			printf("���� �ݾ�: %d ���: %d\n", pay, info.rest);
		}
		else {
			printf("��� �����մϴ�.\n");
		}
	}
	return 0;
}
int order(PRODUCT* p, int amount)
{
	if (p->rest < amount)
		return 0;
	p->rest -= amount;
	return amount * p->price;
}
