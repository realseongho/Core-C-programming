/*
	���α׷� ���� : 11��
	�ǽ��� : 2022.10.16
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct product {
	char name[20];
	int price;
	int rest;
}PRODUCT;

int order(PRODUCT* p, int amount);
int main(void)
{
	PRODUCT info[5] = { {"�Ƹ޸�ī��",2500,10},{"�׸�Ƽ��",4000,10},{"������",5000,5},{"�������",8500,10},{"Ŀ��Ĭ����",6500,10}};
	char name[20] = "";
	int i, amount, pay;

	while (1) {
		printf("�ֹ��� ��ǰ��? ");
		scanf("%s", name);
		if (strcmp(name, ".") == 0)
			break;
		for (i = 0; i < 5; i++) {
			if (strcmp(name, info[i].name) == 0) {
				printf("�ֹ��� ����? ");
				scanf("%d", &amount);
				break;
			}
		}
		if (i > 4) {
			printf("%s�� �߸��� �Է��Դϴ�.\n", name);
			continue;
		}
		if (pay = order(&info[i], amount)) {
			printf("���� �ݾ�:%6d %6s ���:%2d\n", pay, info[i].name, info[i].rest);
		}
		else {
			printf("��� �ֹ� �������� �����ϴ�.\n");
			continue;
		}
	}
	for (i = 0; i < 5; i++) {
		printf("[%10s %4d�� ���:%2d]\n", info[i].name, info[i].price, info[i].rest);
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
