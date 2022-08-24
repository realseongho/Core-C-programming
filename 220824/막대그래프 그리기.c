#include <stdio.h>

int main(void)
{
	int i,height;
	
	while(1){
		printf("막대의 높이(종료: -1): ");
		scanf("%d", &height);
		if(height<0)
			break;
		for(i=0; i<height; i++)
			printf("*"); 
		printf("\n");
	}	
	
	
	return 0;
} 
