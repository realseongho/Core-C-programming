//6¹ø 
#include <stdio.h>

int main(void)
{
	int x1, x2, y1, y2;	
	double slope = 0;
	
	printf("coordinate (x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("another one (x2, y2)? ");
	scanf("%d %d", &x2, &y2);
	slope = (double)(y2 - y1) / (x2 - x1);
	
	printf("slope of a line: %f\n", slope);
	
	return 0;
}
