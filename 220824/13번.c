#include <stdio.h>

int main(void)
{
	int i,n,r,result=1;
	
	printf("n�� ��: ");
	scanf("%d", &n);
	printf("r�� ��: ");
	scanf("%d", &r);
	
	for(i=n; i>=(n-r+1); i--)
		result *= i;
		
	printf("������ ���� %d�Դϴ�.\n", result);
	
	return 0;
}
