/*
	���α׷� ���� : 17��
	�ǽ��� : 2022.10.17
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

enum genre { ballad, hip_hop, pop };

typedef struct song {
	char name[20];
	char singer[20];
	enum genre g;
	int time;
}SONG;

void print_song(SONG* p);
void search_song(SONG* p, char *str, int len); // ���ڿ� ������ ������ �ð� ��û ���....������ ��ƴ� ��¥
int main(void)
{
	SONG song_info[8] = { {"Ÿ��","����",ballad,240},{"Shivers","Ed sheeran",pop,192},{"����� ��������","�̹���",ballad,245},
		{"Perfect","10cm",ballad,210},{"����Ŀ","10cm",ballad,260},{"119 remix","Gray",hip_hop,295},
		{"Always awake","������",hip_hop,189},{"�縻���","�����",ballad,239} };
	//print_song(song_info);
	while (1) {
		char name[20];
		int len,i;
		printf("Ű����(����/��Ƽ��Ʈ)? ");
		gets(name, 20, stdin);
		if (strcmp(name, ".") == 0)
			break;
		len = strlen(name);
		search_song(song_info, name, len);
	}
	return 0;
}
void search_song(SONG* p, char *str, int len)
{
	int i;
	for (i = 0; i < 8; i++) {
		if (strncmp(str, p[i].name, len) == 0|| strncmp(str, p[i].singer, len) == 0) {
			switch (p[i].g) {
			case 0:
				printf("%-20s%-20s%-10s%-d��\n", p[i].name, p[i].singer, "ballad", p[i].time);
				break;
			case 1:
				printf("%-20s%-20s%-10s%-d��\n", p[i].name, p[i].singer, "hip-hop", p[i].time);
				break;
			case 2:
				printf("%-20s%-20s%-10s%-d��\n", p[i].name, p[i].singer, "pop", p[i].time);
				break;
			}
		}
	}
}
void print_song(SONG* p)
{
	SONG temp = { 0 };
	int i, j;
	for (i = 0; i < 7; i++) {
		for (j = i; j < 8; j++) {
			if (p[i].g > p[j].g) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	printf("%-20s%-20s%-10s%-10s\n","����","��Ƽ��Ʈ","�帣","����ð�");
	for (i = 0; i < 8; i++) {
		switch (p[i].g) {
		case 0:
			printf("%-20s%-20s%-10s%-d��\n", p[i].name, p[i].singer, "ballad", p[i].time);
			break;
		case 1:
			printf("%-20s%-20s%-10s%-d��\n", p[i].name, p[i].singer, "hip-hop", p[i].time);
			break;
		case 2:
			printf("%-20s%-20s%-10s%-d��\n", p[i].name, p[i].singer, "pop", p[i].time);
			break;
		}
	}
}
