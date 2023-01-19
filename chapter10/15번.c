/*
	프로그램 내용 : 15번
	실습일 : 2022.10.16
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct p {
	int x, y;
}POINT;

void swap_point(POINT* p);
int main(void)
{
	POINT pta[10] = { {7,4},{12,93},{22,31},{1,20},{34,53},{41,2},{32,9},{21,31},{8,2},{3,5} };
	int i;
	printf("<<정렬 전>>\n");
	for (i = 0; i < 10; i++) {
		printf("(%d, %d)", pta[i].x, pta[i].y);
	}
	printf("\n<<정렬 후>>\n");
	swap_point(pta);
	for (i = 0; i < 10; i++) {
		printf("(%d, %d)", pta[i].x, pta[i].y);
	}

	return 0;
}
void swap_point(POINT* p)
{
	int i, j, temp;
	for (i = 0; i < 10; i++) {
		for (j = i; j < 10; j++) {
			if (p[i].x > p[j].x) {
				temp = p[i].x;
				p[i].x = p[j].x;
				p[j].x = temp;
			}
		}
	}
}

/*int main(void)
{
	int i, j, arr[5] = { 5,3,8,2,1 };
	int temp;

	for (i = 0; i < 4; i++) {
		for (j = i; j < 5; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);


	return 0;
}*/
