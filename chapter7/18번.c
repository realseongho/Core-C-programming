//18��
#include <stdio.h>
int check_num(int arr[],int size,int key);

int main(void)
{
	int set[10] = {0};
	int i,j;
	
	printf("�迭�� �߰��� ����? ");
	scanf("%d", &set[0]);
	printf("%d\n", set[0]);	
	for(i=1; i<10; i++){
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &set[i]);
		if(check_num(set,i,set[i]) >= 0){ // �ε����� 0���� �ֱ� ������ ' >= 0 ' 
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.",check_num(set,i,set[i]));
			i--; // �� ������ printf�ٷ� ���� �ִٰ� �����°ǵ� �̰Ŷ����� ���������� ������.
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
