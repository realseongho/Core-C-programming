//17번
#include <stdio.h>
int get_quadrant(int x, int y); 

int main(void)
{
	int x,y;
	
	while(1){
		printf("점의 좌표 (x, y)? ");
		scanf("%d %d", &x, &y);

		if(get_quadrant(x,y)==0){
			printf("좌표는 x축 또는 y축 또는 원점에 위치합니다.\n자세한건 생략.\n");
			break;}
		else
			printf("%d사분면의 점입니다.\n",get_quadrant(x,y));	
	}
	return 0;
}
int get_quadrant(int x, int y)
{
	if(x==0||y==0)
		return 0;
	else if(x>0 && y>0)
		return 1;
	else if(x<0 && y>0)
		return 2;
	else if(x<0 && y<0)
		return 3;
	else if(x>0 && y<0)
		return 4;
} 
