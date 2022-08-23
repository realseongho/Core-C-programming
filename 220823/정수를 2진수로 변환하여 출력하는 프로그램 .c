//정수를 2진수로 변환하여 출력하는 프로그램 
#include <stdio.h>

/*int main(void)
{
	int i,count=-1,a,arr[20]={0};
	
	printf("Type number >> ");
	scanf("%d", &a);
	for(i=0; ; i++){
		if(a==0)
			break;
		arr[i] = a%2;
		a /= 2;
		count++;
	}
	for(count;count>=0;count--) 
		printf("%d",arr[count]);	
	return 0;
}*/
int main(void)
{
	int number;
	
	printf("2진수로 변환할 정수? ");
	scanf("%d", &number);
	number & (1<<7)?printf("1"):printf("0");
	number & (1<<6)?printf("1"):printf("0");
	number & (1<<5)?printf("1"):printf("0");
	number & (1<<4)?printf("1"):printf("0");
	number & (1<<3)?printf("1"):printf("0");
	number & (1<<2)?printf("1"):printf("0");
	number & (1<<1)?printf("1"):printf("0");
	number & 1?printf("1"):printf("0"); 
	
	return 0;
}
