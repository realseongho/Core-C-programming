//3��
#include <stdio.h>

int main(void)
{
	int change;
	
	printf("change amount? ");
	scanf("%d", &change);
	change /= 10; // 10���̸� ���� 
	change *= 10;
	
	printf("change (cut off less than 10won): %d\n", change);
	printf("50000�� %d��\n", change/50000);
	change %= 50000;	
	printf("10000�� %d��\n", change/10000);
	change %= 10000;	
	printf(" 5000�� %d��\n", change/5000);
	change %= 5000;	
	printf(" 1000�� %d��\n", change/1000);
	change %= 1000;	
	printf("  100�� %d��\n", change/100);
	change %= 100;	
	printf("   10�� %d��\n", change/10);
	
	return 0;
} 
