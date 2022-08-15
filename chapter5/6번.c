//6번
#include <stdio.h>
#define conversion_p_to_m rate*3.305785
#define conversion_m_to_p rate*0.3025

int main(void)
{
	char scales;
	double rate;
	
	printf("Type area to conversion\nex) 160 m /48 p >> ");
	scanf("%lf %c", &rate, &scales);
	
	if(scales == 'p' || scales =='P')
		printf("%.2f 평 == %.2f 제곱미터\n", rate, conversion_p_to_m);
	else if(scales == 'm' || scales =='M')
		printf("%.2f 제곱미터 == %.2f 평\n", rate, conversion_m_to_p);	
	else
		printf("Please type scales properly");
		
	return 0;
} 
