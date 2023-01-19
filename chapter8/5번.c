/*
	프로그램 내용 : 5번 
	실습일 : 2022.09.25
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
void arith_seq(int arr[],int size,int cd);

int main(void)
{
	int arr[10] = {0}, cd;
	
	printf("첫 번째 항? ");
	scanf("%d", &arr[0]);
	printf("공차? ");
	scanf("%d", &cd);
	
	arith_seq(arr,10,cd);	
		
	return 0;
}
void arith_seq(int arr[],int size,int cd)
{
	int i;
	
	printf("등차수열: %d",arr[0]);
	for(i=1; i<size; i++){
		 arr[i] = arr[i-1] + cd;
		 printf(" %d",arr[i]);
	}
}
