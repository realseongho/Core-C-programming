/*
	프로그램 내용 : 배열과 키 값을 매개변수로 전달받아 키 값의 인덱스를 저장하고, 찾은 갯수를 리턴하는 함수 작성 프로그램. 
	실습일 : 2022.09.26
	개발자 : 배성호 (201810674) 
*/
#include <stdio.h>
int find_all_in_array(int arr[], int size, int key); 

int main(void)
{
	int arr[10] = {12,45,62,12,99,83,23,12,72,37};
	int key,amount,i;
	
	for(i=0; i<10; i++)
		printf("%d ",arr[i]);
	printf("\n찾을 값? ");
	scanf("%d", &key);
	
	amount = find_all_in_array(arr,10,key);
	printf("찾은 항목은 모두 %d개입니다.\n", amount);
	printf("찾은 항목의 인덱스:");
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
