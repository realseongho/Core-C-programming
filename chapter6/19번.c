//19��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void graph(int data, int scale);

int main(void)
{
	int data,i,scale; // scale 101�̸� data�� 101,102,201�϶��� ��1���� ����ؾ� �ϱ� ������ �ٽ� ���� �ݿø��� �ϸ� �ȵǱ� ������ ������ 
	srand(time(NULL));
	printf("�������� ���Ͻʽÿ� >> ");
	scanf("%d", &scale);
	
	for(i=0; i<3; i++){
		data = rand()%10000; // 0~9999 ������ ������ ���� 
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
	printf(" %d��\n",count);	
} 
