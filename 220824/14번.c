#include <stdio.h>
#include <math.h>

/*int main(void)
{
	int i,num,f_num,result=0;
	
	printf("������ �Է��ϼ��� >> ");
	scanf("%d", &num);
	f_num = num;
	
	for(i=0;f_num>0;i++) // i=0���� �ʱ���� �����ؾ� �ϴ� ������! num�� ��ǥ�� ��� 0���� �۾����� �ݺ����� Ż���ϱ� ���� i++�Ű� Ż���ϱ� ����.  
		f_num /= 10; // �Է��� ������ �ڸ����� �˾Ƴ��� ���� 
	printf("i = %d\n",i);	
	do{
		i--;	
		result += (num%10)*pow(10,i);
		num /= 10;
	}while(i>0);	

	printf("%d\n",result);
	
	return 0;
}*/


int main(void)
{
	int arr[10]={0};
	int i,j,num;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	
	for(i=0; num>0; i++){
		arr[i] = num%10;
		num /= 10;
	}	
	i--;
	for(j=0; j<=i; j++)
		printf("%d",arr[j]);
	
	return 0;
} 
