// ����Ž������ ������ ���� ���߱� 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int times = 0,answer,que;
	srand(time(NULL));
	que = rand()%100+1;
	do{
		printf("1~100���� ���� �� �����ϱ��? ");
		scanf("%d", &answer);
		times++;
		if(answer>100||answer<1){
			printf("�ٽ� �����ÿ�!\n");times--;}
		else if(que<answer)
			printf("down!\n");
		else if(que>answer)
			printf("UP!\n"); 
		else
			printf("����!\n����� %d������ ������ ���߾����ϴ�.\n",times);
	}while(que != answer);	
	
	return 0;
}
