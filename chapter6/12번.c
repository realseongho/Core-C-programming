//12��
#include <stdio.h>
int is_leap_year(int year);

int main(void)
{
	int year,finish,line=0;
	
	printf("������ �����̿� �ִ� ������ �����ٱ��? ");
	scanf("%d %d", &year, &finish);
	if(finish<year){
		printf("�ڿ� ������ ũ�� �����ʽÿ� >> ");
		scanf("%d %d", &year, &finish);} 
	for(year; year<=finish; year++){
		if(is_leap_year(year)==1){
			printf(" %d", year);
			line++;}
		else
			continue;
		if(line==10){
			printf("\n");
			line = 0;	
		}
	}
	
	return 0;
}
int is_leap_year(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
		return 1;
	else
		return 0;
}
