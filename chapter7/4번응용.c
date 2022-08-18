//4번 응용
//오름차 정렬 후 결과 도출하기 
#include <stdio.h>

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
	int i, j, temp;
	
	printf("배열:");
	for(i=0; i<10; i++){
		printf(" %d", arr[i]);
	}
	printf("\n오름차 정렬된 배열:");
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		printf(" %d", arr[i]);
	}
	printf("\n최댓값: 인덱스=9, 값=%d\n", arr[9]);
	printf("최솟값: 인덱스=0, 값=%d\n", arr[0]);
	
	return 0;
} 

