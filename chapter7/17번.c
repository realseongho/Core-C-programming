//17번
#include <stdio.h>

int main(void)
{
	int multiset[10] = {0};
	int i,j;
	
	for(i=0; i<10; i++){
		printf("배열에 추가할 원소? ");
		scanf("%d", &multiset[i]);
		for(j=0; j<=i; j++)
			printf("%d ",multiset[j]);
		printf("\n"); 
	} 
	
	return 0;
} 
