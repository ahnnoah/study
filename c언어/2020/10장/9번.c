#include <stdio.h>
#include <time.h>

int main() {
	int score[5][3];
	int max, min;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			score[i][j] = rand() % 101; // 0~100점
			printf("%d\t", score[i][j]);
		}
		printf("\n");
	}
	for (int j = 0; j < 3; j++) {
		max = score[0][j];
		min = score[0][j];
		for (int i = 1; i < 5; i++) {
			max = (max < score[i][j]) ? score[i][j] : max;
			min = (min > score[i][j]) ? score[i][j] : min;
		}
		printf("시험 #%d의 최대점수 = %d\n", j, max);
		printf("시험 #%d의 최저점수 = %d\n", j, min);
	}

	return 0;
}
