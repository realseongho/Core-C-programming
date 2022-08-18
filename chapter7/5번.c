//5번
#include <stdio.h>

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 12, 37};
	int i,key,flag=0;
	
	printf("배열:");
	for(i=0; i<10; i++){
		printf(" %d", arr[i]);
	}
	printf("\n찾을 값? ");
	scanf("%d", &key);
	
	for(i=9; i>=0; i--) // 끝에서부터 역순으로 찾기 
		if(key == arr[i]){
			flag = 1;
			break;
		}
	if(flag == 1)
		printf("%d는 %d번째 원소입니다.\n", key, i); // 찾아보니 flag 없이 찾으면 바로 문장 출력하고 return하여 종료하는 방법도 있음. 
	else
		printf("해당 값을 가진 원소를 찾을 수 없습니다.\n");
	
	return 0;
} 

