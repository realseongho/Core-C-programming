// 컴퓨터와 가위바위보 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int choose,com;
	srand(time(NULL));
	
	while(1){
		printf("선택하시오(1: 가위 2: 바위 3: 보) >> _\b");
		scanf("%d", &choose);
		com = rand()%3+1;
		
		if(choose==0){
			printf("종료합니다ㅋ\n");
			break;
		}
		
		printf("나: %s\n",choose==1?"가위":choose==2?"바위":"보");
		printf("컴퓨터: %s\n",com==1?"가위":com==2?"바위":"보");
	
		if(choose==com)
			printf("비겼습니다.\n");
		else if(choose==1&&com==3 || choose==2&&com==1 || choose==3&&com==2)
			printf("이겼습니다.\n");
		else
			printf("졌습니다.\n");
	}
	
	return 0;
}
