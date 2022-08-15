//3번
#include <stdio.h>
#include <math.h> 
double distance(int a, int b, int c, int d);

int main(void)
{
	int a,b,c,d;
	
	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &a, &b);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &c, &d);
	
	printf("(%d, %d)~(%d, %d) 직선의 길이: %lf\n", a,b,c,d, distance(a,b,c,d)); 
	
	return 0;
} 
double distance(int a, int b, int c, int d)
{
	double cal;
	cal = sqrt(pow(c-a,2)+pow(d-b,2));
	
	return cal;
}
