#include <stdio.h>

int main(void)
{
	int i,n,sum=0;
	
	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		sum += i*i;
	
	printf("��갪�� %d�Դϴ�.\n", sum);
	
	return 0;
}
