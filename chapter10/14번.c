/*
	프로그램 내용 : 랜덤함수로 직사각형의 우상단점, 좌하단점을 설정하고 정규화하는 함수와 중심점의 좌표를 구하는 함수를 정의한 후 호출하는 프로그램
	실습일 : 2022.10.16
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct p {
	int x, y;
}POINT;

typedef struct r {
	POINT left_bottom, right_top;
}RECT;

void print_rect(RECT *p,POINT *p1);
void normalize_rect(RECT* p);
POINT center_rect(RECT* p);
int main(void)
{
	RECT pt[3] = { 0 };
	POINT p;
	int i;
	srand(time(NULL));

	for (i = 0; i < 3; i++) {
		pt[i].left_bottom.x = rand() % 100;
		pt[i].left_bottom.y = rand() % 100;
		pt[i].right_top.x = rand() % 100;
		pt[i].right_top.y = rand() % 100;
		normalize_rect(&pt[i]);
		p = center_rect(&pt[i]);
		print_rect(&pt[i], &p);
	}

	return 0;
}
void print_rect(RECT* p, POINT* p1)
{
	printf("[RECT 좌하단점:(%d, %d) 우상단점:(%d, %d)	중심점: (%d, %d)]\n", p->left_bottom.x, p->left_bottom.y, p->right_top.x, p->right_top.y, p1->x, p1->y);
}
void normalize_rect(RECT* p)
{
	int temp,a,b,c,d;
	a = p->left_bottom.x;
	b = p->right_top.x;
	c = p->left_bottom.y;
	d = p->right_top.y;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
		p->left_bottom.x = a;
		p->right_top.x = b;
	}
	if (c > d) {
		temp = c;
		c = d;
		d = temp;
		p->left_bottom.y = c;
		p->right_top.y = d;
	}
}
POINT center_rect(RECT* p)
{
	POINT a = { 0 };
	a.x = (p->left_bottom.x + p->right_top.x) / 2;
	a.y = (p->left_bottom.y + p->right_top.y) / 2;

	return a;
}
