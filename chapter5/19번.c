//19��
#include <stdio.h>

int main(void)
{
	int base_guarantee,BEP,per_fee,i,guest,total;
	
	printf("�⺻ �⿬��? ");
	scanf("%d", &base_guarantee);
	printf("���� �б��� ���� ��? ");
	scanf("%d", &BEP);
	printf("���� 1�δ� ���� ����Ƽ? ");
	scanf("%d", &per_fee);
	
	for(i=1; i<=15; i++){
		guest = i*1000000;
		total = base_guarantee+(guest-BEP)*per_fee;
		if(guest >= BEP)
			printf("���� %d�� �� �� ���� �⿬��:%10d\n", guest, total);
		else
			printf("���� %d�� �� �� ���� �⿬��:%10d\n", guest, base_guarantee);
	}
	
	return 0;
} 
