// ���� ���� �׷��� 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y, char* ch);
void draw_frame(void);
int main(void)
{
// (0,0) ������ x=10, y=10 ��������
	
	draw_frame();
	int score[3] = { 80,65,90 };
	int i, j, count[3] = {0}, x = 12, y = 9;
	for (i = 0; i < 3; i++) { // ������ ���� �׷��� ���� ���ϱ�
		count[i] = score[i] / 10; // ������ ���� y��ǥ�� �پ���� ��
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < count[i];) {
			gotoxy(x, y - j, "*");
			j++;
		}
		x += 3;
	}
	gotoxy(1, 1, "");
	printf("A = %d", score[0]);
	gotoxy(1, 2, "");
	printf("B = %d", score[1]);
	gotoxy(1, 3, "");
	printf("C = %d", score[2]);
	gotoxy(15, 15, "��");
 	return 0;
}
void gotoxy(int x, int y, char* ch)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%s", ch);
}
void draw_frame(void)
{
	int i;
	for (i = 1; i < 10; i++) {
		gotoxy(10, i, "��");
	}
	gotoxy(10, i, "��");
	for (i = 11; i < 30; i++) {
		gotoxy(i, 10, "��");
	}
	gotoxy(12, 11, "A  B  C");
}