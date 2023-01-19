/*
	프로그램 내용 : 13번 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void swap_array(int*,int*);
int main(void)
{
	int a[10] = {1,3,5,7,9,11,13,15,17,19};
	int b[10] = {0,2,4,6,8,10,12,14,16,18}; 
	int i;
	
	printf("a:");
	for(i=0; i<10; i++)
		printf("%3d", a[i]);
	printf("\nb:");
	for(i=0; i<10; i++)
		printf("%3d", b[i]);
	printf("\n<< swap_array 호출 후 >>\n");
	swap_array(a,b);
	printf("a:");
	for(i=0; i<10; i++)
		printf("%3d", a[i]);
	printf("\nb:");
	for(i=0; i<10; i++)
		printf("%3d", b[i]);
	
	return 0;
}
void swap_array(int *a,int *b)
{
	int i,temp;
	
	for(i=0; i<10; i++){
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
