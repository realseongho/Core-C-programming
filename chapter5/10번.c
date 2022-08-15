//10번
//math.h헤드파일을 include해서 라이브러리함수 pow쓰면 편할텐데 반복문을 쓰라고 해서 
#include <stdio.h>

int main(void)
{
	int i, unit, bill, divide=1;
	
	printf("금액? ");
	scanf("%d", &bill);
	printf("절사단위 (10의 지수승)? ");
	scanf("%d", &unit);
	
	for(i=0; i<unit; i++)
		divide *= 10;
	bill /= divide;
	bill *= divide;
	
	printf("금액(%d 미만 절사): %d\n", divide, bill);
	
	return 0;
} 
