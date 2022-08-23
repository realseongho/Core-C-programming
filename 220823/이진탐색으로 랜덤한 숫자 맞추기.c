// 이진탐색으로 랜덤한 숫자 맞추기 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int times = 0,answer,que;
	srand(time(NULL));
	que = rand()%100+1;
	do{
		printf("1~100까지 숫자 중 무엇일까요? ");
		scanf("%d", &answer);
		times++;
		if(answer>100||answer<1){
			printf("다시 적으시오!\n");times--;}
		else if(que<answer)
			printf("down!\n");
		else if(que>answer)
			printf("UP!\n"); 
		else
			printf("정답!\n당신은 %d번만에 정답을 맞추었습니다.\n",times);
	}while(que != answer);	
	
	return 0;
}
