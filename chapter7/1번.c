//1��
#include <stdio.h>

int main(void)
{
	int arr[10], difference, i;
	
	printf("ù ��° ��? ");
	scanf("%d",&arr[0]);
	printf("����? ");
	scanf("%d",&difference);	
	
	printf("��������: %d", arr[0]);
	for(i=1; i<10; i++){
		arr[i] = arr[i-1] + difference;
		printf(" %d",arr[i]); 
	}
	
	return 0;
} 
