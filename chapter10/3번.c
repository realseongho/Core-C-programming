/*
	프로그램 내용 : 3번
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
	struct login idpw[5] = { {"guest","idontknow"},{"bae","yay"}};
	int i;
	char type_id[20];
	char type_pw[20];
	while(1){
		printf("ID? ");
		scanf("%s", type_id);
		if (strcmp(type_id, ".") == 0) {
			break;
		}
		for (i = 0; i < 5; i++) {
			if (strcmp(type_id, idpw[i].id) == 0) {
				printf("PW: ");
				scanf("%s", type_pw);
				if (strcmp(type_pw, idpw[i].pw) == 0) {
					printf("로그인 성공\n");
					break;
				}
				else {
					printf("PW를 다시 한번 확인해 주세요.\n");
					break;
				}
			}
		}
		if(i>4) 
			printf("해당 ID는 존재하지 않습니다.\n");
	}

	return 0;
}
