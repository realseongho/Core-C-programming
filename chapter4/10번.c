//10��
#include <stdio.h>

int main(void)
{
	double time_taken;
	int time; // 1�ʸ� �ּҴ����� �� ���̱� ������ �ð��� ���������� �ص� ������ٰ� ������ �ϰ�, ������ �����ڸ� ����ϱ� ������. 
	
	printf("���� �ҿ�ð�(�ð�)? ");
	scanf("%lf", &time_taken);
	time = time_taken*3600; //3600�� �������ν� �ʷ� �ٲپ� �� ��Ȯ�ϰ� �ð��� ����� �� �ְ� ��.  
	
	printf("���� �ҿ�ð���");
	time >= 86400 ? printf(" %d��", time/86400) : printf("");
	time %= 86400;
	time >= 3600 ? printf(" %d�ð�", time/3600) : printf("");
	time %= 3600;
	time >= 60 ? printf(" %d��", time/60) : printf("");
	time %= 60;
	time >= 1 ? printf(" %d��", time) : printf("");
	printf("�Դϴ�."); 
	
	return 0;
} 
