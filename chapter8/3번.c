/*
	프로그램 내용 : 3번 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>

int main(void)
{
	int arr[10] = {44,32,65,23,45,76,77,89,23,45};
	int *p = &arr[0];
	int i;
	
	printf("배열:"); 
	for(i=0; i<10; i++)
		printf("%4d",*(p+i));
	
	p = &arr[9];
	printf("\n역순:"); 
	for(i=0; i<10; i++)
		printf("%4d",*(p-i));
	
	return 0;
}
