//16¹ø
#include <stdio.h>

int main(void)
{
	unsigned int RGB = 0,R,G,B;
	
	printf("red? ");
	scanf("%u", &R);
	printf("green? ");
	scanf("%u", &G);
	printf("blue? ");
	scanf("%u", &B);
	R &= 0xFF;
	G <<= 8;
	G &= 0xFF00;
	B <<= 16;
	B &= 0xFF0000;
	RGB = R | G | B;
	
	printf("RGB true color: %06X\n", RGB); 
	
	return 0;
} 
