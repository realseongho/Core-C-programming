//1¹ø 
#include <stdio.h>

int main(void)
{
	int length;
	
	printf("square side? ");
	scanf("%d", &length);
	
	printf("area of a square: %d\n", length*length);
	printf("perimeter of a square: %d\n", length*4);
	
	return 0;
}
