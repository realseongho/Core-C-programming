//220823_test.c
#include <stdio.h>

/*int main(void)
{
	int i,times;
	double top=4,bottom=1,pi=4;
	
	printf("반복횟수를 지정하십시오 >> _\b");
	scanf("%d", &times);
	for(i=1; i<times; i++){
		bottom += 2;
		top *= -1;
		pi += top/bottom;
	}
	printf("pi = %.6f\n", pi);
	
	return 0;
}*/
/*int main(void)
{
	int i,j,z;
	for(i=0;i<7;i++){
		for(j=6;j>i;j--)
			printf(" ");
		for(z=0;z<=i;z++)
			printf("*");
		for(z=0;z<=i-1;z++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}*/
/*int main(void)
{
	int num,i,j;
	printf("정수를 입력하시오: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=0;j<=i;j++)
			printf("%d ",j+1);
		printf("\n");
	} 
	
	return 0;
}*/
int main(void)
{
	char c;
	do{
		printf("Type >> ");
		scanf(" %c",&c);
	}while(c!='A');
	
	return 0;
}
