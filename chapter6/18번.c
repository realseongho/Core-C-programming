//18��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void divisors(int num);

int main(void)
{
	int num,i;
	srand(time(NULL));
	
	for(i=0; i<3; i++){
		num= rand()%1000; // 0~999���� ������ ���� 
		printf("%d�� ���:",num);
		divisors(num);
	}	
	
	return 0;
}
void divisors(int num)
{
	int i,count=0;
	for(i=1; i<=num; i++){
		if(num%i==0){
			printf(" %d", i);
			count++;
		}
	}
	printf(" => �� %d��\n", count);
}
 
