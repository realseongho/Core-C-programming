//1��
#include <stdio.h>
void get_perimeter(int width, int vertical);

int main(void)
{
	int width, vertical;
	
	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &vertical);	
	
	get_perimeter(width, vertical);
	
	return 0;
} 
void get_perimeter(int width, int vertical)
{
	printf("���簢���� �ѷ�: %d\n", width*2+vertical*2);
}
