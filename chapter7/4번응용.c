//4�� ����
//������ ���� �� ��� �����ϱ� 
#include <stdio.h>

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};
	int i, j, temp;
	
	printf("�迭:");
	for(i=0; i<10; i++){
		printf(" %d", arr[i]);
	}
	printf("\n������ ���ĵ� �迭:");
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
	printf("\n�ִ�: �ε���=9, ��=%d\n", arr[9]);
	printf("�ּڰ�: �ε���=0, ��=%d\n", arr[0]);
	
	return 0;
} 

