//8¹ø 
#include <stdio.h>
#define conversion_yard_to_meter yard*0.9144

int main(void)
{
	int yard;
	
	printf("length(yd)? ");
	scanf("%d", &yard);
	
	printf("%d yd = %f m\n", yard, conversion_yard_to_meter);
	
	return 0;
}
