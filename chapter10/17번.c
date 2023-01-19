/*
	프로그램 내용 : 17번
	실습일 : 2022.10.17
	개발자 : 배성호 (201810674)
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
void search_song(SONG* p, char *str, int len); // 문자열 역참조 때문에 시간 엄청 썼다....포인터 어렵다 진짜
int main(void)
{
	SONG song_info[8] = { {"타투","적재",ballad,240},{"Shivers","Ed sheeran",pop,192},{"사랑이 지나가면","이문세",ballad,245},
		{"Perfect","10cm",ballad,210},{"스토커","10cm",ballad,260},{"119 remix","Gray",hip_hop,295},
		{"Always awake","빈지노",hip_hop,189},{"사말어사","장범준",ballad,239} };
	//print_song(song_info);
	while (1) {
		char name[20];
		int len,i;
		printf("키워드(제목/아티스트)? ");
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
				printf("%-20s%-20s%-10s%-d초\n", p[i].name, p[i].singer, "ballad", p[i].time);
				break;
			case 1:
				printf("%-20s%-20s%-10s%-d초\n", p[i].name, p[i].singer, "hip-hop", p[i].time);
				break;
			case 2:
				printf("%-20s%-20s%-10s%-d초\n", p[i].name, p[i].singer, "pop", p[i].time);
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
	printf("%-20s%-20s%-10s%-10s\n","제목","아티스트","장르","재생시간");
	for (i = 0; i < 8; i++) {
		switch (p[i].g) {
		case 0:
			printf("%-20s%-20s%-10s%-d초\n", p[i].name, p[i].singer, "ballad", p[i].time);
			break;
		case 1:
			printf("%-20s%-20s%-10s%-d초\n", p[i].name, p[i].singer, "hip-hop", p[i].time);
			break;
		case 2:
			printf("%-20s%-20s%-10s%-d초\n", p[i].name, p[i].singer, "pop", p[i].time);
			break;
		}
	}
}
