/*
	���α׷� ���� : 11�� 
	�ǽ��� : 2022.09.26
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
void get_rect_info(int*, int*); 

int main(void)
{
	int width,vertical;
	
	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &vertical);
	
	get_rect_info(&width, &vertical);
	
	return 0;
}
void get_rect_info(int *w, int *v)
{
	printf("����:%4d, �ѷ�:%3d\n", *w * *v, *w*2 + *v*2);
}
