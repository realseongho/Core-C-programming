/*
	프로그램 내용 : 1번 프로그램에서 id,pw를 소문자로 만드는 함수와 출력하는 함수를 추가하여 작성하는 프로그램
	실습일 : 2022.10.15
	개발자 : 배성호 (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct login {
	char id[20];
	char pw[20];
}LOGIN;
void make_lower(LOGIN *p);
void print_login(LOGIN* p);

int main(void)
{
	LOGIN idpw = { 0 };

	printf("ID? ");
	scanf("%s", idpw.id);
	printf("Password? ");
	scanf("%s", idpw.pw);
	
	make_lower(&idpw);
	print_login(&idpw);

	return 0;
}
void make_lower(LOGIN *p)
{
	_strlwr(p->id);
	_strlwr(p->pw);
}
void print_login(LOGIN* p)
{
	int i, len;
	len = strlen(p->pw);

	printf("ID: %s\n", p->id);
	printf("PW: ");
	for (i = 0; i < len; i++) {
		printf("*");
	}
	printf("\n");
}
