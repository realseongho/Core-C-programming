//18번
#include <stdio.h>
int check_num(int arr[],int size,int key);

int main(void)
{
	int set[10] = {0};
	int i,j;
	
	printf("배열에 추가할 원소? ");
	scanf("%d", &set[0]);
	printf("%d\n", set[0]);	
	for(i=1; i<10; i++){
		printf("배열에 추가할 원소? ");
		scanf("%d", &set[i]);
		if(check_num(set,i,set[i]) >= 0){ // 인덱스가 0부터 있기 때문에 ' >= 0 ' 
			printf("해당 원소가 이미 [%d]에 존재합니다.",check_num(set,i,set[i]));
			i--; // 이 문장이 printf바로 위에 있다가 내려온건데 이거때문에 시행착오가 많았음.
 		}
		else	
			for(j=0; j<=i; j++)
				printf("%d ",set[j]);
		printf("\n"); 
	} 
	
	return 0;
} 
int check_num(int arr[],int size,int key)
{
	int i;
	for(i=0; i<size; i++)
		if(arr[i]==key)
			return i;
			
	return -1; 
}
