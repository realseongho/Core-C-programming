/*
	���α׷� ���� : 3��
	�ǽ��� : 2022.10.15
	������ : �輺ȣ (201810674)
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
					printf("�α��� ����\n");
					break;
				}
				else {
					printf("PW�� �ٽ� �ѹ� Ȯ���� �ּ���.\n");
					break;
				}
			}
		}
		if(i>4) 
			printf("�ش� ID�� �������� �ʽ��ϴ�.\n");
	}

	return 0;
}
