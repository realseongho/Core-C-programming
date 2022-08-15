//3번
#include <stdio.h>

int main(void)
{
	int change;
	
	printf("change amount? ");
	scanf("%d", &change);
	change /= 10; // 10원미만 절사 
	change *= 10;
	
	printf("change (cut off less than 10won): %d\n", change);
	printf("50000원 %d장\n", change/50000);
	change %= 50000;	
	printf("10000원 %d장\n", change/10000);
	change %= 10000;	
	printf(" 5000원 %d장\n", change/5000);
	change %= 5000;	
	printf(" 1000원 %d장\n", change/1000);
	change %= 1000;	
	printf("  100원 %d개\n", change/100);
	change %= 100;	
	printf("   10원 %d개\n", change/10);
	
	return 0;
} 
