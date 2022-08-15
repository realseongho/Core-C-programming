//9¹ø
#include <stdio.h>
int make_rgb(int,int,int);
int make_reverse(int);

int main(void)
{
	int r,g,b;
	
	printf("red color? ");
	scanf("%d", &r);
	printf("green color? ");
	scanf("%d", &g);
	printf("blue color? ");
	scanf("%d", &b);
	
	printf("RGB %X <==> %06X\n", make_rgb(r,g,b), make_reverse(make_rgb(r,g,b)));
	
	return 0;
}
int make_rgb(int r,int g,int b)
{
	g <<= 8;
	g &= 0xff00;
	b <<= 16;
	b &=0xff0000;
	
	return (r|g|b);	
}
int make_reverse(int rgb)
{
	rgb = ~rgb & 0xffffff;
	
	return rgb;
}
