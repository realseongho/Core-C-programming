/*
	���α׷� ���� : PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� �Լ��� ����ϴ� ���α׷�
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

void print_product(PRODUCT* p);
int main(void)
{
	PRODUCT info[10] = { 0 }; // 10���� ��ǰ ������ �����ϰڴ� ��
	int i=0;
	printf("��ǰ��? ");
	scanf("%s", info[i].name);
	printf("����? ");
	scanf("%d", &info[i].price);
	printf("���? ");
	scanf("%d", &info[i].rest);

	print_product(info);

	return 0;
}
void print_product(PRODUCT* p)
{
	printf("[%s %d�� ���:%d]\n", p[0].name, p[0].price, p[0].rest);
}
