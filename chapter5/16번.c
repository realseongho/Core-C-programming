//16번
#include <stdio.h>

int main(void)
{
	int num,amount,i;
	
	printf("양의 정수? ");
	scanf("%d", &num);
	printf("배수의 갯수? ");
	scanf("%d", &amount);
	
	for(i=1;i<=amount;i++)
		printf("%d ",num*i);
	
	return 0;
} 
