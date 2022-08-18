//7번
#include <stdio.h>
void fill_array(int arr[], int size, int num);

int main(void)
{
	int arr[20]={0};
	int num;
	
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);
	fill_array(arr,20,num);		
	
	return 0;
}
void fill_array(int arr[], int size, int num)
{
	int i;
	for(i=0; i<size; i++)
		printf("%d ", arr[i] = num);
} 
