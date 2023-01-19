/*
	프로그램 내용 : 11번 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void get_rect_info(int*, int*); 

int main(void)
{
	int width,vertical;
	
	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &vertical);
	
	get_rect_info(&width, &vertical);
	
	return 0;
}
void get_rect_info(int *w, int *v)
{
	printf("넓이:%4d, 둘레:%3d\n", *w * *v, *w*2 + *v*2);
}
