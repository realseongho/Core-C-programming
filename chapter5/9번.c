//9번
#include <stdio.h>

int main(void)
{
	int hamb, fried, coke, set=0;	
	
	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
	printf("햄버거 개수? ");
	scanf("%d", &hamb); 
	printf("감자튀김 개수? ");
	scanf("%d", &fried); 
	printf("콜라 개수? ");
	scanf("%d", &coke); 
	while(hamb>0 && fried>0 && coke>0){
		set++;
		hamb--,fried--,coke--;
	}
	
	printf("\n상품명\t\t단가\t수량\t금액\n");
	if(set>0)
		printf("세트%16d%7d%9d\n", 6500, set, set*6500);
	if(hamb>0)
		printf("햄버거%14d%7d%9d\n", 4000, hamb, hamb*4000);
	if(fried>0)
		printf("감자튀김%12d%7d%9d\n", 2000, fried, fried*2000);
	if(coke>0)
		printf("콜라%16d%7d%9d\n", 1500, coke, coke*1500);	
	
	return 0;
} 
