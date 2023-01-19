/*
	프로그램 내용 : 11번
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

int order(PRODUCT* p, int amount);
int main(void)
{
	PRODUCT info[5] = { {"아메리카노",2500,10},{"그린티라떼",4000,10},{"핫초코",5000,5},{"고추장찌개",8500,10},{"커피칵테일",6500,10}};
	char name[20] = "";
	int i, amount, pay;

	while (1) {
		printf("주문할 제품명? ");
		scanf("%s", name);
		if (strcmp(name, ".") == 0)
			break;
		for (i = 0; i < 5; i++) {
			if (strcmp(name, info[i].name) == 0) {
				printf("주문할 수량? ");
				scanf("%d", &amount);
				break;
			}
		}
		if (i > 4) {
			printf("%s는 잘못된 입력입니다.\n", name);
			continue;
		}
		if (pay = order(&info[i], amount)) {
			printf("결제 금액:%6d %6s 재고:%2d\n", pay, info[i].name, info[i].rest);
		}
		else {
			printf("재고가 주문 수량보다 적습니다.\n");
			continue;
		}
	}
	for (i = 0; i < 5; i++) {
		printf("[%10s %4d원 재고:%2d]\n", info[i].name, info[i].price, info[i].rest);
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
