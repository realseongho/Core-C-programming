//5��
#include <stdio.h>

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 12, 37};
	int i,key,flag=0;
	
	printf("�迭:");
	for(i=0; i<10; i++){
		printf(" %d", arr[i]);
	}
	printf("\nã�� ��? ");
	scanf("%d", &key);
	
	for(i=9; i>=0; i--) // ���������� �������� ã�� 
		if(key == arr[i]){
			flag = 1;
			break;
		}
	if(flag == 1)
		printf("%d�� %d��° �����Դϴ�.\n", key, i); // ã�ƺ��� flag ���� ã���� �ٷ� ���� ����ϰ� return�Ͽ� �����ϴ� ����� ����. 
	else
		printf("�ش� ���� ���� ���Ҹ� ã�� �� �����ϴ�.\n");
	
	return 0;
} 

