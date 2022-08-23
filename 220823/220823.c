//316p 6번 
#include <stdio.h>
void print_stars(void);
void print_menu(void);

int main(void)
{
	char choose;
	double a,b;
	
	print_stars();
	print_menu();
	print_stars();
	do{	
		do{
			printf("연산을 선택하시오: ");
			scanf(" %c", &choose);
		}while(choose != 'A'&&choose != 'S'&&choose != 'M'&&choose != 'D'&&choose != 'Q'); // AND인데 OR로 조건을 걸었어서 계속 틀렸음..ㅋㅋ; 
		if(choose=='Q')
			break;
		printf("두 수를 공백으로 분리하여 입력하시오: ");
		scanf("%lf %lf", &a, &b);
		switch(choose){
			case 'A':
				printf("%.0f\n", a+b);
				break;
			case 'S':
				printf("%.0f\n", a-b);
				break;
			case 'M':
				printf("%.0f\n", a*b);
				break;
			case 'D':
				printf("%.0f\n", a/b);
				break;
		}
	}while(1);
	
	return 0;
}
void print_stars(void){
	int i;
	for(i=0;i<17;i++)
		printf("*");
	printf("\n");
}
void print_menu(void){
	printf("A---- Add\nS---- Subtract\nM---- Multiply\nD---- Divide\nQ---- Quit\n");
}
