//6번
#include <stdio.h>
#define SIZE 10

int main(void)
{
	double arr[SIZE] = {1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8};
	int i, j;
	double temp[SIZE] ={0};
	
	printf("배열:");
	for(i=0; i<SIZE; i++)
		printf(" %.1f", arr[i]);
	for(i=SIZE-1,j=0; i>=0; i--,j++)
		temp[j] = arr[i];
	printf("\n역순:");
	for(i=0; i<SIZE; i++){
		arr[i] = temp[i];
		printf(" %.1f", arr[i]);
	}
	
	return 0;
} 
