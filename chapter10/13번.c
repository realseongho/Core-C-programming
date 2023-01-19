/*
	프로그램 내용 : 13번
	실습일 : 2022.10.16
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct p {
	int x, y;
}POINT;

typedef struct r {
	POINT left_bottom, right_top;
}RECT;

void print_rect(RECT *p);
int main(void)
{
	RECT pt;
	printf("직사각형의 좌하단점(x,y)? ");
	scanf("%d %d", &pt.left_bottom.x, &pt.left_bottom.y);
	printf("직사각형의 우상단점(x,y)? ");
	scanf("%d %d", &pt.right_top.x, &pt.right_top.y);

	print_rect(&pt);

	return 0;
}
void print_rect(RECT* p)
{
	printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)]\n", p->left_bottom.x, p->left_bottom.y, p->right_top.x, p->right_top.y);
}
