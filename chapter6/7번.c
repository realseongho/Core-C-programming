//7��
#include <stdio.h>
int is_prime(int num);

int main(void)
{
	int i,num,count=0,x_count=0;
	
	printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d", &num);
	
	for(i=2; i<=num; i++){
		if(is_prime(i)==1){
			if(x_count == 15){
				printf("\n");
				x_count = 0;
			}
			printf("%3d", i);
			count++;
			x_count++;
		}
		else
			continue;
	} 
	printf("\n�Ҽ��� ��� %d���Դϴ�.\n", count);
	
	return 0;
}
int is_prime(int num)
{
	int i,count=0;
	for(i=1; i<=num; i++){
		if(num%i==0)
			count++;
		else
			continue;
	}
	return (count==2);
}
