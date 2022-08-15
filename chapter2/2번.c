//2번
#include <stdio.h>

int main(void)
{
	int num;
	float grade;
	
	printf("번호? ");
	scanf("%d", &num);
	printf("학점? ");
	scanf("%f", &grade);
	
	printf("%d번 학생의 학점은 %f입니다.\n", num, grade);
	
	return 0;	
} 
