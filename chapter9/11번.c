/*
	프로그램 내용 : 11번
	실습일 : 2022.10.02
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char word1[10] = "";
	int count = 1,len;
	char* p = word1;
	printf("word? ");
	gets(word1, 10, stdin);
	len = strlen(word1);
	while (1) {
		char word2[10] = "";
		printf("word? ");
		gets(word2, 10, stdin);
		if (p[len - 1] == word2[0] && strlen(word2) >= 3) {
			count++;
			strcpy(word1, word2);
			len = strlen(word1);
		}
		else if (strlen(word2) < 3) {
			printf("too short, try again\n");
			continue;
		}
		else if (p[len - 1] != word2[0]) {
			printf("WRONG WORD!!! YOU FAILED!!!");
			printf("count: %d\n", count); break;
		}
	}
	return 0;
}
