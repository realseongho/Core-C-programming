//10��
#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int num,i,random_num,sum=0;
	
	printf("0~N������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");
	scanf("%d", &num);
	
	for(i=0;i<10;i++){
		random_num = rand()%num+1;
		printf("%d ", random_num);
		sum += random_num;
	}
	printf("�հ�: %d\n",sum);
	
	return 0;
} 
