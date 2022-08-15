//10번
#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int num,i,random_num,sum=0;
	
	printf("0~N사이의 임의의 정수를 10개 생성해서 합계를 구합니다.\n");
	scanf("%d", &num);
	
	for(i=0;i<10;i++){
		random_num = rand()%num+1;
		printf("%d ", random_num);
		sum += random_num;
	}
	printf("합계: %d\n",sum);
	
	return 0;
} 
