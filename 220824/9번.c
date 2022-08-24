#include <stdio.h>

int main(void)
{
	int i=0,sum=0;
	while(1){
		i++;
		sum += i;
		if(sum>10000){
			sum -= i;
			i--;
			break; 
		}
	}
	printf("1부터 %d까지의 합이 %d입니다.\n",i,sum);
	
	return 0;
}
