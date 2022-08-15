//5번
#include <stdio.h>
int is_even(int num);
int is_odd(int num);
int even,odd;

int main(void)
{
	int num;
	
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	
	while(1){
		scanf("%d", &num);
		if(num == 0)
			break;
		is_odd(num);	
		is_even(num);
	}	
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even, odd);
	
	return 0;
} 
int is_even(int num)
{
	if(num%2 == 0)
		even++;
	return even;
}
int is_odd(int num)
{
	if(num%2 != 0)
		odd++;
	return odd;	
}
