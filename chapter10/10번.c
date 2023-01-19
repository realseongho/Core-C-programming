/*
	프로그램 내용 : PRODUCT 구조체 배열을 만들어 정보를 입력받아 저장하고 출력하는 프로그램
	실습일 : 2022.10.16
	개발자 : 배성호 (201810674)
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
		printf("제품명? ");
		scanf("%s", info[i].name);
		if (strcmp(info[i].name, ".") == 0)
			break;
		printf("가격 재고? ");
		scanf("%d %d", &info[i].price, &info[i].rest);
	}
	j = i;
	for (i = 0; i < j; i++) {
		printf("[%5s %4d원 재고:%2d]\n", info[i].name, info[i].price, info[i].rest);
	}

	return 0;
}
