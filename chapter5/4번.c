//4¹ø
#include <stdio.h>

int main(void)
{
	int leap_year;
	
	printf("year? ");
	scanf("%d", &leap_year);
	
	if(leap_year % 4 == 0 && leap_year % 100 != 0 || leap_year % 400 == 0)	
		printf("%dyear is a leap year.\n", leap_year);
	else
		printf("%dyear is not a leap year.\n", leap_year);		
	
	return 0;
} 
