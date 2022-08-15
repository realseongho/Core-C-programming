//2¹ø 
#include <stdio.h>

int main(void)
{
	int width, vertical;
	
	printf("width of a rectangle? ");
	scanf("%d", &width);
	printf("vertical of a rectangle? ");
	scanf("%d", &vertical);
	
	printf("area of a rectangle: %d\n", width*vertical);
	printf("perimeter of a rectangle: %d\n",width*2+vertical*2);
	
	return 0;
}
