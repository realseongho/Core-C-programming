//도박사의 확률 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>  

int main(void)
{
	int i,seed,win=0,goal=250;
	srand(time(NULL));
	
	for(i=0; i<100; i++){
		seed = 50; //seed 50으로 초기화 
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
	printf("도박사는 100번 중 %d번을 250달러를 따서 돌아왔다.\n",win);
	
	return 0;
}
