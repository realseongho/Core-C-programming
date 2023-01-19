/*
	프로그램 내용 : 1번
	실습일 : 2022.10.15
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct login {
	char id[20];
	char pw[20];
};

int main(void)
{
	struct login idpw = { 0 };
	int i, len;

	printf("ID? ");
	scanf("%s", idpw.id);
	printf("Password? ");
	scanf("%s", idpw.pw);
	len = strlen(idpw.pw);

	printf("ID: %s\n", idpw.id);
	printf("PW: ");
	for (i = 0; i < len; i++) {
		printf("*");
	}

	return 0;
}
