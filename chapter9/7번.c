/*
	���α׷� ���� : 7��
	�ǽ��� : 2022.10.01
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void check_phone_str(void);

int main(void)
{
	check_phone_str();
	return 0;
}
void check_phone_str(void)
{
	char str[100] = "";
	int area, mid, last, i;
	while (1) {
		int len, check = 0;
		printf("��ȭ��ȣ(. �Է� �� ����)? ");
		gets(str, 100, stdin);
		len = strlen(str);
		if (strcmp(str, ".") == 0) break;
		for (i = 0; i < len; i++)
			if (isdigit(str[i]) == 0 || strncmp(str,"010",3) != 0 || len != 11)
				check++;
		//sscanf(str, "%03d %04d %04d", &area, &mid, &last);
		
		if (check > 0)
			printf("�߸� �Է��ϼ̽��ϴ�. 01012345678 �������� �Է��ϼ���.\n");
		else
			printf("%s�� ��ȿ�� ��ȭ��ȣ�Դϴ�.\n", str);
	}
}
