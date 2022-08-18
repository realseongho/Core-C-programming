//15번
#include <stdio.h>
void zero_array(int arr[],int size);

int main(void)
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	zero_array(arr,10);
	
	return 0;
} 
void zero_array(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d ",arr[i] = 0);
}
//return makes integer from pointer without a cast 포인터개념인 것 같음. 혹시나 해서 어디서 본 적 있는 *을 붙이니 경고 없이 됨. 
