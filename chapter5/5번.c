//5¹ø
#include <stdio.h>
#define conversion_C_to_F rate*9/5+32 
#define conversion_F_to_C (rate-32)*5/9

int main(void)
{
	char choice;
	double rate;
	
	printf("Temperature scales conversion\nex) 26 C,78 F ? ");
	scanf("%lf %c", &rate, &choice);
	
	if(choice == 'C')
		printf("%.2f C ==> %.2f F\n", rate, conversion_C_to_F);
	else if(choice == 'F')
		printf("%.2f F ==> %.2f C\n", rate, conversion_F_to_C);
	else
		printf("Please type scales properly");

	return 0;
} 
