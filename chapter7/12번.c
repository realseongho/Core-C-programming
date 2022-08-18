//12번 배열을 안쓰고 풀어버렸네.. 
#include <stdio.h>

int main(void)
{
	int seat[10] = {1,2,3,4,5,6,7,8,9,10};
	int i, j, rest=10, choose=0,count=0;
	
	while(1){
		if(rest == 0)
			break;
		printf("현재 좌석: [");
		if(rest<10)
			for(j=0; j<count; j++)
				printf(" X");
		for(i=0; i<rest; i++)
			printf(" O");	
		printf(" ]\n예매 할 좌석 수? ");
		scanf("%d", &choose);
		count += choose;
		for(i=10-rest; i<count; i++)
			printf("%d ", seat[i]);
		printf("번 좌석을 예매했습니다.\n");
		rest -= choose;
	}
	
	return 0;
}

