//12�� �迭�� �Ⱦ��� Ǯ����ȳ�.. 
#include <stdio.h>

int main(void)
{
	int seat[10] = {1,2,3,4,5,6,7,8,9,10};
	int i, j, rest=10, choose=0,count=0;
	
	while(1){
		if(rest == 0)
			break;
		printf("���� �¼�: [");
		if(rest<10)
			for(j=0; j<count; j++)
				printf(" X");
		for(i=0; i<rest; i++)
			printf(" O");	
		printf(" ]\n���� �� �¼� ��? ");
		scanf("%d", &choose);
		count += choose;
		for(i=10-rest; i<count; i++)
			printf("%d ", seat[i]);
		printf("�� �¼��� �����߽��ϴ�.\n");
		rest -= choose;
	}
	
	return 0;
}

