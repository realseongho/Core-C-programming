/*
	���α׷� ���� : �������� �� �̸��� �Է¹޾� �̴ϼ��� ����ϴ� ���α׷�
	�ǽ��� : 2022.10.02
	������ : �輺ȣ (201810674)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[100] = "";
	
	while (1) {
		char temp[5] = "";
		char* p = 0;
		char* q = 0;
		printf("���� �̸�(.�Է� �� ����)? ");
		gets(str, 100, stdin);
		p = str;
		q = temp;
		if (strncmp(str, ".", 1) == 0) break;
		*q = str[0];
		q++;
		while (1) {
			if (p = strchr(p, ' ')) { // bae_seong_ho
				*q = *(p + 1);
				q++, p++;
			}
			else break;
		}
		printf("�̴ϼ�: %s\n", _strupr(temp));
	}
	return 0;
}
