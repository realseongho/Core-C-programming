//8번
#include <stdio.h>
void get_red(unsigned int);
void get_green(unsigned int);
void get_blue(unsigned int);

int main(void)
{
	unsigned int RGB;
	
	printf("RGB 색상? ");
	scanf("%x", &RGB); 
	
	printf("RGB %X의 ", RGB);
	get_red(RGB);
	get_green(RGB);
	get_blue(RGB);
	
	return 0;
}
void get_red(unsigned int num){
	num &= 0x0000FF;
	printf("red: %d, ", num);
}
	
void get_green(unsigned int num){
	num &= 0x00FF00;
	num >>= 8;
	printf("green: %d, ", num);
}
void get_blue(unsigned int num){
	num &= 0xFF0000;
	num >>= 16;
	printf("blue: %d\n", num);
}
