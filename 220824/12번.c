#include <stdio.h>

/*int main(void)
{
	int a=0,b=1,c=1,i,num;
	
	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &num);
	printf("0, ");
	if(num>=1){
		for(i=1; i<=num; i++){
			printf("%d, ", c);
			c=a+b;
			a=b;
			b=c;
		}
	}
	
	return 0;
}*/
int main(void)
{
	int arr[100] ={0};
	int i,num;
	arr[0] = 0,arr[1] = 1;	
	
	printf("���° �ױ��� ���ұ��? ");
	scanf("%d", &num);
	printf("0, ");
	if(num>0)
		for(i=1; i<=num; i++){
			printf("%d, ", arr[i]);
			arr[i+1] = arr[i] + arr[i-1];
		}
	
	return 0;
} 
