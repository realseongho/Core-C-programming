//316p 6�� 
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
			printf("������ �����Ͻÿ�: ");
			scanf(" %c", &choose);
		}while(choose != 'A'&&choose != 'S'&&choose != 'M'&&choose != 'D'&&choose != 'Q'); // AND�ε� OR�� ������ �ɾ�� ��� Ʋ����..����; 
		if(choose=='Q')
			break;
		printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
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
