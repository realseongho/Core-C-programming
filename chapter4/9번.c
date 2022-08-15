//9번
//동영상의 재생시간을 초 단위로 입력받는다. 몇시간 몇분 몇초, *조건연산자를 사용하여 0시간 0분 이런거 생략할 수 있게 만들기. 
#include <stdio.h>

int main(void)
{
	int runtime_s;

	printf("재생시간(초)? ");
	scanf("%d", &runtime_s);
	
	printf("재생시간은");
	runtime_s >= 3600 ? printf(" %d시간", runtime_s/3600) : printf("");
	runtime_s %= 3600;
	runtime_s >= 60 ? printf(" %d분", runtime_s/60) : printf("");
	runtime_s %= 60;
	runtime_s >= 1 ? printf(" %d초", runtime_s) : printf("");
	printf("입니다.");	

	return 0;
} 
