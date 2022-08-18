//13¹ø
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	unsigned char image1[16] ={0};
	unsigned char image2[16] ={0};
	unsigned char image3[16] ={0};
	int i;
	srand(time(NULL));
	
	printf("image1: ");
	for(i=0; i<16; i++){
		image1[i] = rand()%256;
		printf("%02X ", image1[i]);
	}
	printf("\nimage2: ");
	for(i=0; i<16; i++){
		image2[i] = rand()%256;
		printf("%02X ", image2[i]);
	}
	printf("\nimage3: ");
	for(i=0; i<16; i++){
		image3[i] = image1[i]|image2[i];
		printf("%02X ", image3[i]);
	}
	
	return 0;
} 
