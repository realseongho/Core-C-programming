#include <stdio.h>
#include <math.h>

/*int main(void)
{
	int i,num,f_num,result=0;
	
	printf("정수를 입력하세요 >> ");
	scanf("%d", &num);
	f_num = num;
	
	for(i=0;f_num>0;i++) // i=0으로 초기식을 설계해야 하는 이유는! num가 목표한 대로 0보다 작아져서 반복문을 탈출하기 전에 i++돼고서 탈출하기 때문.  
		f_num /= 10; // 입력한 정수의 자릿수를 알아내기 위해 
	printf("i = %d\n",i);	
	do{
		i--;	
		result += (num%10)*pow(10,i);
		num /= 10;
	}while(i>0);	

	printf("%d\n",result);
	
	return 0;
}*/


int main(void)
{
	int arr[10]={0};
	int i,j,num;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	
	for(i=0; num>0; i++){
		arr[i] = num%10;
		num /= 10;
	}	
	i--;
	for(j=0; j<=i; j++)
		printf("%d",arr[j]);
	
	return 0;
} 
