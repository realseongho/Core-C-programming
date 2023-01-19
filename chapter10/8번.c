/*
	프로그램 내용 : PRODUCT 구조체 변수를 선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 함수로 출력하는 프로그램
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

void print_product(PRODUCT* p);
int main(void)
{
	PRODUCT info[10] = { 0 }; // 10개의 제품 정보를 저장하겠단 뜻
	int i=0;
	printf("제품명? ");
	scanf("%s", info[i].name);
	printf("가격? ");
	scanf("%d", &info[i].price);
	printf("재고? ");
	scanf("%d", &info[i].rest);

	print_product(info);

	return 0;
}
void print_product(PRODUCT* p)
{
	printf("[%s %d원 재고:%d]\n", p[0].name, p[0].price, p[0].rest);
}
