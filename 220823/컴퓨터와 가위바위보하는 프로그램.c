// ��ǻ�Ϳ� ���������� 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int choose,com;
	srand(time(NULL));
	
	while(1){
		printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��) >> _\b");
		scanf("%d", &choose);
		com = rand()%3+1;
		
		if(choose==0){
			printf("�����մϴ٤�\n");
			break;
		}
		
		printf("��: %s\n",choose==1?"����":choose==2?"����":"��");
		printf("��ǻ��: %s\n",com==1?"����":com==2?"����":"��");
	
		if(choose==com)
			printf("�����ϴ�.\n");
		else if(choose==1&&com==3 || choose==2&&com==1 || choose==3&&com==2)
			printf("�̰���ϴ�.\n");
		else
			printf("�����ϴ�.\n");
	}
	
	return 0;
}
