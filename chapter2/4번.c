//4번
#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	
	printf("시? ");
	scanf("%d", &hour);
	printf("분? ");
	scanf("%d", &min);
	printf("초? ");
	scanf("%d", &sec);
	
	printf("입력한 시간은 %02d:%02d:%02d입니다.\n", hour, min, sec);
	
	return 0;	
} 
