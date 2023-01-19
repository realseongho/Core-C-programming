/*
	프로그램 내용 : 9번 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void fill_2d_array(int (*p)[5], int size);

int main(void)
{
	int arr[4][5];
	int (*p)[5] = &arr[0];
	
	fill_2d_array(p,4);

	return 0;
}
void fill_2d_array(int (*p)[5], int size)
{
	int i,j,src;
	
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &src); 
	
	for(i=0; i<size; i++){
		for(j=0; j<5; j++){
			p[i][j] = src;
			printf("%d ",p[i][j]);			
		}
		printf("\n");
	}	
}
