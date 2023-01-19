/*
	���α׷� ���� : �̹� ��ϵ� SONG����ü �迭�� Ȱ���Ͽ� ��ȣ�� �Է¹޾� �÷��̸���Ʈ ����� ���α׷�
	�ǽ��� : 2022.10.19
	������ : �輺ȣ (201810674)
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
	const SONG song_info[8] = { {"�縻���","�����","ballad","245��"},{"Perfect","10cm","ballad","265��"}, {"�׳డ �翡 ���ٸ�","�����","ballad","194��"}, {"ù���","�����","ballad","261��"},
	{"���ú��� 1��","������","ballad","243��"},	{"����� ����","����","ballad","301��"}, {"��","����Ͽ� �󱼵�","ballad","187��"}, {"��ٸ� ��ŭ, ��","ī������","ballad","265��"} };
	SONG* playlist[5] = { NULL };

	print_song(song_info);
	print_playlist(song_info, playlist);

	return 0;
}
void print_song(const SONG* p)
{
	int i;
	printf("   %-30s%-20s%-10s%-10s\n", "����", "��Ƽ��Ʈ", "�帣", "����ð�");
	for (i = 0; i < 8; i++) {
		printf("%d: %-30s%-20s%-10s%-10s\n", i + 1, p[i].name, p[i].singer, p[i].genre, p[i].time);
	}
}
void print_playlist(const SONG* p,SONG* pp)
{
	int i, add_number, total_time, time, index = 0;
	while (1) {
		total_time = 0;
		printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
		scanf("%d", &add_number);
		if (add_number == 0) return 0;
		else if (add_number > 8 || add_number < 1) {
			printf("�߸��� �� ��ȣ�Դϴ�.\n");
			continue;
		}
		pp[index] = p[add_number - 1];
		printf("<< �÷��̸���Ʈ >>\n");
		for (i = 0; i <= index; i++) {
			printf("%-30s%-20s%-10s%-10s\n", pp[i].name, pp[i].singer, pp[i].genre, pp[i].time);
			sscanf(pp[i].time, "%d", &time);
			total_time += time;
		}
		printf("�� ����ð� : %d��\n", total_time);
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
