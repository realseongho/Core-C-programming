//18��
#include <stdio.h>

int main(void)
{
	int parking_time;
	
	while(1){
		printf("�����ð�(��)? ");
		scanf("%d", &parking_time);
		
		if(parking_time == 0)
			break;
		else if(parking_time <= 30)
			printf("���� ���: 2000��\n");
		else if(parking_time > 30 && parking_time <= 250){
			if(parking_time%10==0)
				printf("���� ���: %d��\n", 2000+(parking_time-30)*100);
			else{
				parking_time /= 10;
				parking_time *= 10;
				printf("���� ���: %d��\n", 2000+(parking_time-30)*100+1000); 
			}
		}
		else if(parking_time > 250 && parking_time < 1440)
			printf("���� ���: 25000��\n");
		else if(parking_time >= 1440)
			printf("���� �ð��� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");			
	}
	
	return 0;
} 
