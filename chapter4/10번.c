//10번
#include <stdio.h>

int main(void)
{
	double time_taken;
	int time; // 1초를 최소단위로 할 것이기 때문에 시간을 정수형으로 해도 상관없다고 생각을 하고, 나머지 연산자를 사용하기 위함임. 
	
	printf("비행 소요시간(시간)? ");
	scanf("%lf", &time_taken);
	time = time_taken*3600; //3600을 곱함으로써 초로 바꾸어 더 정확하게 시간을 출력할 수 있게 됨.  
	
	printf("비행 소요시간은");
	time >= 86400 ? printf(" %d일", time/86400) : printf("");
	time %= 86400;
	time >= 3600 ? printf(" %d시간", time/3600) : printf("");
	time %= 3600;
	time >= 60 ? printf(" %d분", time/60) : printf("");
	time %= 60;
	time >= 1 ? printf(" %d초", time) : printf("");
	printf("입니다."); 
	
	return 0;
} 
