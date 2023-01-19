/*
	프로그램 내용 : 9번
	실습일 : 2022.10.16
	개발자 : 배성호 (201810674)
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
	printf("제품명? ");
	scanf("%s", info.name);
	printf("가격? ");
	scanf("%d", &info.price);
	printf("재고? ");
	scanf("%d", &info.rest);

	while (1) {
		printf("주문 수량? ");
		scanf("%d", &amount);
		if (amount == 0)
			break;
		if (pay = order(&info, amount)) {
			printf("결제 금액: %d 재고: %d\n", pay, info.rest);
		}
		else {
			printf("재고가 부족합니다.\n");
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
