//16��
#include <stdio.h>

int main(void)
{
	int num,amount,i;
	
	printf("���� ����? ");
	scanf("%d", &num);
	printf("����� ����? ");
	scanf("%d", &amount);
	
	for(i=1;i<=amount;i++)
		printf("%d ",num*i);
	
	return 0;
} 
