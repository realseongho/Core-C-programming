//10번
#include <stdio.h>

int main(void)
{
	int x[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
	int y[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
	int i, j, xpy[3][3] = {0};
	
	printf("x 행렬:\n");	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}
	printf("y 행렬:\n");	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%4d", y[i][j]);
		}
		printf("\n");
	}
	printf("x + y 행렬:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%4d", xpy[i][j] = x[i][j]+y[i][j]);
		}
		printf("\n");
	}
	
	return 0;
} 
