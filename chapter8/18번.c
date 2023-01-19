/*
	프로그램 내용 : 중복되지 않게 입력받은 정수를 집합의 원소로 추가하고, 그때마다 원소들을 출력하는 프로그램 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
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
		printf("배열에 추가할 원소? ");
		scanf("%d", &element);
		
		for(i=0; i<*current; i++){
			if(arr[i] == element){
				printf("해당 원소가 이미 [%d]에 존재합니다.\n",i);
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
