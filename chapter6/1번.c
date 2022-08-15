//1번
#include <stdio.h>
void get_perimeter(int width, int vertical);

int main(void)
{
	int width, vertical;
	
	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &vertical);	
	
	get_perimeter(width, vertical);
	
	return 0;
} 
void get_perimeter(int width, int vertical)
{
	printf("직사각형의 둘레: %d\n", width*2+vertical*2);
}
