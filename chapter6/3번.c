//3��
#include <stdio.h>
#include <math.h> 
double distance(int a, int b, int c, int d);

int main(void)
{
	int a,b,c,d;
	
	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &a, &b);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &c, &d);
	
	printf("(%d, %d)~(%d, %d) ������ ����: %lf\n", a,b,c,d, distance(a,b,c,d)); 
	
	return 0;
} 
double distance(int a, int b, int c, int d)
{
	double cal;
	cal = sqrt(pow(c-a,2)+pow(d-b,2));
	
	return cal;
}
