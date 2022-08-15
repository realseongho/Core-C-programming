//13¹ø
#include <stdio.h>
#include <math.h>

int main(void)
{
	int x1,y1,x2,y2;
		
	printf("starting point of a straight line (x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("ending point of a straight line (x2, y2)? ");
	scanf("%d %d", &x2, &y2);
	 
	printf("A straight line's length: %f\n", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
	
	return 0;
} 
