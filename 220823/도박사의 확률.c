//���ڻ��� Ȯ�� 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  

int main(void)
{
	int i,seed,win=0,goal=250;
	srand(time(NULL));
	
	for(i=0; i<100; i++){
		seed = 50; //seed 50���� �ʱ�ȭ 
		while(1){
			if(rand()%2>0)
				seed++;
			else
				seed--;
			if(seed==goal){
				win++;
				break;
			}
			else if(seed==0)
				break;
		}
	}
	printf("���ڻ�� 100�� �� %d���� 250�޷��� ���� ���ƿԴ�.\n",win);
	
	return 0;
}
