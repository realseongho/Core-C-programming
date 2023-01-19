/*
	프로그램 내용 : 13번
	실습일 : 2022.10.03
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	const char* str[] = {
		"Live Photo의 스틸 이미지를 변경할 수 있습니다.",
		"스크린 타임에서 iPhone의 하루 사용 시간을 확인할 수 있습니다.",
		"개발자 : 배성호"
	};
	int n;
	srand(time(NULL));
	printf("엔터키를 누를 때마다 사용 팁을 보여줍니다.\n");
	while (getchar() != EOF) {
		n = rand() % 3;
		printf("%s\n", str[n]);
	}

	return 0;
}
