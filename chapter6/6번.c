//6��
#include <stdio.h>
int choose_menu(void);

int main(void)
{
	while(1){
		switch(choose_menu()){
			case 1:
				printf("���� ���⸦ �����մϴ�.\n");
				break;
			case 2:
				printf("���� ������ �����մϴ�.\n");
				break;
			case 3:
				printf("�μ⸦ �����մϴ�.\n");
				break;
			case 0:
				printf("�����մϴ�.\n");
				return 0;
		}				
	}	
}
int choose_menu(void)
{
	int choose;
	
	while(1){
		printf("[1.���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
		scanf("%d", &choose);
		if(choose>=0 && choose<=3)
			return choose;
		else
			continue; 
	}
} 
