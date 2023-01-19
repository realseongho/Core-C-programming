/*
	프로그램 내용 : 이미 등록된 SONG구조체 배열을 활용하여 번호를 입력받아 플레이리스트 만드는 프로그램
	실습일 : 2022.10.19
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct song {
	char name[30];
	char singer[20];
	char genre[10];
	char time[10];
}SONG;

void print_song(const SONG* p);
void print_playlist(const SONG* p,SONG* pp);
int main(void)
{
	const SONG song_info[8] = { {"사말어사","장범준","ballad","245초"},{"Perfect","10cm","ballad","265초"}, {"그녀가 곁에 없다면","장범준","ballad","194초"}, {"첫사랑","장범준","ballad","261초"},
	{"오늘부터 1일","케이윌","ballad","243초"},	{"사건의 지평선","윤하","ballad","301초"}, {"ㅋ","장기하와 얼굴들","ballad","187초"}, {"기다린 만큼, 더","카더가든","ballad","265초"} };
	SONG* playlist[5] = { NULL };

	print_song(song_info);
	print_playlist(song_info, playlist);

	return 0;
}
void print_song(const SONG* p)
{
	int i;
	printf("   %-30s%-20s%-10s%-10s\n", "제목", "아티스트", "장르", "재생시간");
	for (i = 0; i < 8; i++) {
		printf("%d: %-30s%-20s%-10s%-10s\n", i + 1, p[i].name, p[i].singer, p[i].genre, p[i].time);
	}
}
void print_playlist(const SONG* p,SONG* pp)
{
	int i, add_number, total_time, time, index = 0;
	while (1) {
		total_time = 0;
		printf("플레이리스트에 추가할 곡 번호? ");
		scanf("%d", &add_number);
		if (add_number == 0) return 0;
		else if (add_number > 8 || add_number < 1) {
			printf("잘못된 곡 번호입니다.\n");
			continue;
		}
		pp[index] = p[add_number - 1];
		printf("<< 플레이리스트 >>\n");
		for (i = 0; i <= index; i++) {
			printf("%-30s%-20s%-10s%-10s\n", pp[i].name, pp[i].singer, pp[i].genre, pp[i].time);
			sscanf(pp[i].time, "%d", &time);
			total_time += time;
		}
		printf("총 재생시간 : %d초\n", total_time);
		index++;
	}
}


/*int main(void)
{
	char name[10] = "200bae";
	int n;
	sscanf(name, "%d", &n);
	printf("%d", n);

	return 0;
}
*/
