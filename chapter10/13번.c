/*
	���α׷� ���� : 13��
	�ǽ��� : 2022.10.16
	������ : �輺ȣ (201810674)
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
	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &pt.left_bottom.x, &pt.left_bottom.y);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &pt.right_top.x, &pt.right_top.y);

	print_rect(&pt);

	return 0;
}
void print_rect(RECT* p)
{
	printf("[RECT ���ϴ���:(%d, %d) ������:(%d, %d)]\n", p->left_bottom.x, p->left_bottom.y, p->right_top.x, p->right_top.y);
}
