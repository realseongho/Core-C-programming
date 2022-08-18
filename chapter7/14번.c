//14번 배열을 변수에 대입하지 않기. 대입하게 되면 자리가 셔플되는 것이 아니라 값만 바뀌어서 중복수가 생김. 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check_num(int arr[],int size,int key);

int main(void)
{
	int playlist[10]={0};
	int i,num, temp, shuffle;
	srand(time(NULL));
	
	playlist[0] = rand()%100;
	for(i=1; i<10; i++){
		num = rand()%100;
		if(check_num(playlist, i, num) == 1)
			i--;
		else
			playlist[i] = num;
	}
	
	printf("셔플 전:");
	for(i=0; i<10; i++)
		printf("%3d", playlist[i]);
		
	for(i=0; i<10; i++){
		shuffle = rand()%10;
		temp = playlist[i];
		playlist[i] = playlist[shuffle];
		playlist[shuffle] = temp;
	}
	printf("\n셔플 후:");
	for(i=0; i<10; i++)
		printf("%3d", playlist[i]);
	
	return 0;
}
int check_num(int arr[],int size,int key)
{
	int i;
	for(i=0; i<size; i++)
		if(arr[i] == key)
			return 1;

	return 0;	
} 
