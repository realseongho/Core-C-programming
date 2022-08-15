//19번
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void graph(int data, int scale);

int main(void)
{
	int data,i,scale; // scale 101이면 data가 101,102,201일때도 별1개를 출력해야 하기 때문에 다시 말해 반올림을 하면 안되기 때문에 정수형 
	srand(time(NULL));
	printf("스케일을 정하십시오 >> ");
	scanf("%d", &scale);
	
	for(i=0; i<3; i++){
		data = rand()%10000; // 0~9999 사이의 임의의 정수 
		graph(data,scale);
	}
	
	return 0;
}
void graph(int data, int scale)
{
	int i,count=0;
	
	printf("%d:",data);
	data /= scale;
	while(data>0){
		printf("*");
		data--;
		count++;
	}
	printf(" %d개\n",count);	
} 
