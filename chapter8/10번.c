/*
	프로그램 내용 : 포인터를 사용하여 3x3 행렬의 합을 구하는 프로그램 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void print_array(int (*p)[3], int size);
void add_matrix(int (*p1)[3], int (*p2)[3], int (*p3)[3], int size);

int main(void)
{
	int x_arr[3][3] = {10,20,30,40,50,60,70,80,90};
	int y_arr[3][3] = {9,8,7,6,5,4,3,2,1};
	int x_p_y[3][3] = {0};
	
	printf("x 행렬:\n");
	print_array(x_arr,3);
	printf("y 행렬:\n");
	print_array(y_arr,3);
	printf("x + y 행렬:\n");
	add_matrix(x_arr,y_arr,x_p_y,3);
	print_array(x_p_y,3);
	
	return 0;
}
void print_array(int (*p)[3], int size)
{
	int i,j;
	
	for(i=0; i<size; i++){
		for(j=0; j<size; j++)
			printf("%3d", p[i][j]);
		printf("\n");
	}
}
void add_matrix(int (*p1)[3], int (*p2)[3], int (*p3)[3], int size)
{
	int i,j;
	
	for(i=0; i<size; i++)
		for(j=0; j<size; j++)
			p3[i][j] = p1[i][j] + p2[i][j];
}
