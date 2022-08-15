//13¹ø
#include <stdio.h>

int main(void)
{
	int i,line=0;
	
	for(i=32; i<=126; i++){
		if(line==24){
			printf("\n");
			line = 0;
		}
		printf(" %c", i);
		line++;
	}
	
	return 0;
} 
