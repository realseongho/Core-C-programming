//6번
#include <stdio.h>
int choose_menu(void);

int main(void)
{
	while(1){
		switch(choose_menu()){
			case 1:
				printf("파일 열기를 수행합니다.\n");
				break;
			case 2:
				printf("파일 저장을 수행합니다.\n");
				break;
			case 3:
				printf("인쇄를 수행합니다.\n");
				break;
			case 0:
				printf("종료합니다.\n");
				return 0;
		}				
	}	
}
int choose_menu(void)
{
	int choose;
	
	while(1){
		printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
		scanf("%d", &choose);
		if(choose>=0 && choose<=3)
			return choose;
		else
			continue; 
	}
} 
