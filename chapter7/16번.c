//16��
#include <stdio.h>
int find_array(int arr[],int key);

int main(void)
{
	int arr[10] = {23,45,62,12,99,83,23,50,72,37};
	int i,key,result;
	
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\nã�� ��? ");
	scanf("%d", &key);
	result = find_array(arr,key);
	if(result != -1)
		printf("%d�� %d��° �����Դϴ�.\n", key, result);
	else
		printf("ã�� �� �����ϴ�.");	
	
	return 0;
}
int find_array(int arr[],int key)
{
	int i;
	for(i=0; i<10; i++){
		if(arr[i]==key)
			return i;
	}
	return -1;	
} 
