//5��
#include <stdio.h>
int is_even(int num);
int is_odd(int num);
int even,odd;

int main(void)
{
	int num;
	
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
	
	while(1){
		scanf("%d", &num);
		if(num == 0)
			break;
		is_odd(num);	
		is_even(num);
	}	
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even, odd);
	
	return 0;
} 
int is_even(int num)
{
	if(num%2 == 0)
		even++;
	return even;
}
int is_odd(int num)
{
	if(num%2 != 0)
		odd++;
	return odd;	
}
