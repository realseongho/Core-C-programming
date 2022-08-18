//2번
#include <stdio.h>

int main(void)
{
	double arr[10];
	int ratio, i;
	
	printf("첫 번째 항? ");
	scanf("%lf",&arr[0]);
	printf("공비? ");
	scanf("%d",&ratio);	
	
	printf("등비수열: %.1f", arr[0]);
	for(i=1; i<10; i++){
		arr[i] = arr[i-1] * ratio;
		if(i==9){
			printf(" %e",arr[i]);
			break;
		}
		printf(" %.0f",arr[i]); 
	}
	
	return 0;
} 
