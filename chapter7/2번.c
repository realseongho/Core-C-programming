//2��
#include <stdio.h>

int main(void)
{
	double arr[10];
	int ratio, i;
	
	printf("ù ��° ��? ");
	scanf("%lf",&arr[0]);
	printf("����? ");
	scanf("%d",&ratio);	
	
	printf("������: %.1f", arr[0]);
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
