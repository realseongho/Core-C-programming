/*
	���α׷� ���� : PRODUCT ����ü �迭�� ����� ������ �Է¹޾� �����ϰ� ����ϴ� ���α׷�
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

int main(void)
{
	PRODUCT info[5] = {0};
	int i,j;
	for (i = 0; i < 5; i++) {
		printf("��ǰ��? ");
		scanf("%s", info[i].name);
		if (strcmp(info[i].name, ".") == 0)
			break;
		printf("���� ���? ");
		scanf("%d %d", &info[i].price, &info[i].rest);
	}
	j = i;
	for (i = 0; i < j; i++) {
		printf("[%5s %4d�� ���:%2d]\n", info[i].name, info[i].price, info[i].rest);
	}

	return 0;
}
