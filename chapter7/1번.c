//1번
#include <stdio.h>

int main(void)
{
	int arr[10], difference, i;
	
	printf("첫 번째 항? ");
	scanf("%d",&arr[0]);
	printf("공차? ");
	scanf("%d",&difference);	
	
	printf("등차수열: %d", arr[0]);
	for(i=1; i<10; i++){
		arr[i] = arr[i-1] + difference;
		printf(" %d",arr[i]); 
	}
	
	return 0;
} 
