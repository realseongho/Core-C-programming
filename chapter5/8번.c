//8��
#include <stdio.h>

int main(void)
{
	char op;
	int x, y;
	
	printf("��Ʈ �����? ");
	scanf("%i %c %i", &x, &op, &y);
	if(op == '&')
		printf("%X & %X = %X\n", x, y, x&y);
	else if(op == '|')
		printf("%X | %X = %X\n", x, y, x|y);
	else if(op == '^')
		printf("%X ^ %X = %X\n", x, y, x^y);	
	else
		printf("Type &,|,^ \n");
	
	return 0;
} 
