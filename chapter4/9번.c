//9��
//�������� ����ð��� �� ������ �Է¹޴´�. ��ð� ��� ����, *���ǿ����ڸ� ����Ͽ� 0�ð� 0�� �̷��� ������ �� �ְ� �����. 
#include <stdio.h>

int main(void)
{
	int runtime_s;

	printf("����ð�(��)? ");
	scanf("%d", &runtime_s);
	
	printf("����ð���");
	runtime_s >= 3600 ? printf(" %d�ð�", runtime_s/3600) : printf("");
	runtime_s %= 3600;
	runtime_s >= 60 ? printf(" %d��", runtime_s/60) : printf("");
	runtime_s %= 60;
	runtime_s >= 1 ? printf(" %d��", runtime_s) : printf("");
	printf("�Դϴ�.");	

	return 0;
} 
