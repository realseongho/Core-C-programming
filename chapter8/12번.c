/*
	���α׷� ���� : �迭�� Ű ���� �Ű������� ���޹޾� Ű ���� �ε����� �����ϰ�, ã�� ������ �����ϴ� �Լ� �ۼ� ���α׷�. 
	�ǽ��� : 2022.09.26
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
int find_all_in_array(int arr[], int size, int key); 

int main(void)
{
	int arr[10] = {12,45,62,12,99,83,23,12,72,37};
	int key,amount,i;
	
	for(i=0; i<10; i++)
		printf("%d ",arr[i]);
	printf("\nã�� ��? ");
	scanf("%d", &key);
	
	amount = find_all_in_array(arr,10,key);
	printf("ã�� �׸��� ��� %d���Դϴ�.\n", amount);
	printf("ã�� �׸��� �ε���:");
	for(i=0; i<amount; i++)
		printf(" %d",arr[i]);
	
	return 0;
}
int find_all_in_array(int arr[], int size, int key)
{
	int i,index,count=0;
	for(i=0; i<size; i++){
		if(arr[i]==key){
			arr[count] = i;			
			count++;
		}
	}
	if(count==0)
		return 0;
	else
		return count;
}
