//9¹ø
#include <stdio.h>
void print_graph(int arr[],int size);

int main(void)
{
	int ayear_hp_bill[12]={36000, 42000, 38000, 43000, 45000, 39000, 
	40000, 35000, 44000, 50000, 60000, 65000};
	
	print_graph(ayear_hp_bill, 12);		
	
	return 0;
}
void print_graph(int arr[],int size)
{
	int i,j,count=0;
	
	for(i=0; i<size; i++){
		printf("%d¿ù%6d:", i+1, arr[i]);
		for(j=0; j<arr[i]/2000; j++){
			count++;
			printf("*");
		}
		printf(" %d°³\n",count);
		count = 0;
	}
} 
