/*
	���α׷� ���� : �ߺ����� �ʰ� �Է¹��� ������ ������ ���ҷ� �߰��ϰ�, �׶����� ���ҵ��� ����ϴ� ���α׷� 
	�ǽ��� : 2022.09.26
	������ : �輺ȣ (201810674) 
*/
#include <stdio.h>
int add_to_set(int arr[], int size, int *current); 

int main(void)
{
	int arr[10] = {0};
	int i,current=0;
	while(1){
		if(add_to_set(arr, 10, &current)==1 || current<10){
			for(i=0; i<current; i++)
				printf("%d ", arr[i]);
			printf("\n");
		}
		else
			break;
	}	
	
	return 0;
}
int add_to_set(int arr[], int size, int *current)
{
	int i,element;
	if(*current<10){
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &element);
		
		for(i=0; i<*current; i++){
			if(arr[i] == element){
				printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n",i);
				return 0;
			}
		}
		arr[*current] = element;
		(*current)++;
		
		return 1;	
	}
	else
		return 0;
}
