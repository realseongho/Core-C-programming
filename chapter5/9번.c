//9��
#include <stdio.h>

int main(void)
{
	int hamb, fried, coke, set=0;	
	
	printf("[�ܹ��� 4000��, ����Ƣ�� 2000��, �ݶ� 1500��, ��Ʈ 6500��]\n");
	printf("�ܹ��� ����? ");
	scanf("%d", &hamb); 
	printf("����Ƣ�� ����? ");
	scanf("%d", &fried); 
	printf("�ݶ� ����? ");
	scanf("%d", &coke); 
	while(hamb>0 && fried>0 && coke>0){
		set++;
		hamb--,fried--,coke--;
	}
	
	printf("\n��ǰ��\t\t�ܰ�\t����\t�ݾ�\n");
	if(set>0)
		printf("��Ʈ%16d%7d%9d\n", 6500, set, set*6500);
	if(hamb>0)
		printf("�ܹ���%14d%7d%9d\n", 4000, hamb, hamb*4000);
	if(fried>0)
		printf("����Ƣ��%12d%7d%9d\n", 2000, fried, fried*2000);
	if(coke>0)
		printf("�ݶ�%16d%7d%9d\n", 1500, coke, coke*1500);	
	
	return 0;
} 
