//11번
#include <stdio.h>

int main(void)
{
	int score[5][5] ={0};
	double average[4] = {0};
	int i,j;
	
	for(i=0; i<5; i++){
		printf("%d번 학생의 중간, 기말, 팀프로젝트, 출석 점수를 차례대로 쓰시오 >> ", i+1);
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
	}
	for(i=0; i<5; i++){
		printf("학생%4d번:", i+1);
		for(j=0; j<4; j++){
			printf("%5d", score[i][j]);
			score[i][4] += score[i][j];
			average[j] += score[i][j];
		}
		printf(" ==>%4d\n", score[i][4]);
	}
	printf("항목별 평균:");
	for(i=0; i<4; i++)
		printf("%8.2f", average[i]/5);	
	
	return 0;
} 
