//17��
#include <stdio.h>
int get_quadrant(int x, int y); 

int main(void)
{
	int x,y;
	
	while(1){
		printf("���� ��ǥ (x, y)? ");
		scanf("%d %d", &x, &y);

		if(get_quadrant(x,y)==0){
			printf("��ǥ�� x�� �Ǵ� y�� �Ǵ� ������ ��ġ�մϴ�.\n�ڼ��Ѱ� ����.\n");
			break;}
		else
			printf("%d��и��� ���Դϴ�.\n",get_quadrant(x,y));	
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
