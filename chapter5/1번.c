//1¹ø
#include <stdio.h>

int main(void)
{
	int left, top, right, bottom, x, y;
	
	printf("User setting area(left, top)? ");
	scanf("%d %d", &left, &top);
	printf("User setting area(right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("test coordinate? ");
	scanf("%d %d", &x, &y);
	
	if(x >= left && x <= right && y >= top && y <= bottom)
		printf("The coordinate is inside a rectangle\n");	
	else 
		printf("The coordinate is out of a rectangle\n");
	
	return 0;
} 
