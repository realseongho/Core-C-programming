//2��
#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("coordinate of a point? ");
	scanf("%d %d", &x, &y);
	
	if(x==0){ // = �� �ƴϰ� == �̰� ������ �ð� ��û ��� ����
		if(y==0){
			printf("The point the Origin.\n");
			return; 
		}
		printf("The point is located on a y-axis.\n");
	}
	else if(y==0)
		printf("The point is located on a x-axis.\n");
	else if(x>0 && y>0)
		printf("The point is located on a Quadrant 1.\n");
	else if(x<0 && y>0)
		printf("The point is located on a quadrant 2.\n");	
	else if(x<0 && y<0)
		printf("The point is located on a quadrant 3.\n");	
	else if(x>0 && y<0)
		printf("The point is located on a quadrant 4.\n");	
	
	return 0;
} 
