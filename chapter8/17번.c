/*
	���α׷� ���� : 17�� 
	�ǽ��� : 2022.09.26
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
int add_to_multiset(int arr[], int size, int *current); 

int main(void)
{
	int arr[10] = {0};
	int i,current=0;
	while(1){
		if(add_to_multiset(arr, 10, &current)==1){
			for(i=0; i<current; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
		else
			break;
	}	
	
	
	return 0;
}
int add_to_multiset(int arr[], int size, int *current)
{
	int element;
	if(*current<10){
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &element);
		arr[*current] = element;
		(*current)++;
		
		return 1;	
	}
	else
		return 0;
}

