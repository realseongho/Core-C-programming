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
	printf("1���� %d������ ���� %d�Դϴ�.\n",i,sum);
	
	return 0;
}
