/*
	���α׷� ���� : ���̵� �Է¹޾� ��ȿ�� ���̵����� �˻��ϴ� ���α׷�
	�ǽ��� : 2022.10.03
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char id[100] = "";
	int i, len;
	while (1) {
		int PF = 0;
		printf("ID? ");
		gets(id, 100, stdin);
		len = strlen(id);
		if (isalpha(id[0]) == 0) {
			printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
			continue;
		}
		else if (len < 8) {
			printf("ID�� 8�� �̻��̾�� �մϴ�.\n");
			continue;
		}
		for (i = 0; i < len; i++)
			if (isalnum(id[i]) == 0) {
				printf("ID�� �����ڿ� ���ڷθ� �����Ǿ�� �մϴ�.\n");
				PF++;
				break;
			}
		if (PF == 0) {
			printf("%s�� ID�� ����� �� �ֽ��ϴ�!", id);
			break;
		}
	}
	return 0;
}
