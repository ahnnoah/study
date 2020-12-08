#include <stdio.h>
#define SIZE 100

double get_average(int array[], int size);

int main() {
	int arr[3][3] = {
		{60,65,70},
		{45,50,55},
		{55,56,57}
	};
	int sum[3] = { 0 };
	double avg;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i] += arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		avg = get_average(sum, i);
		printf("%d행의 평균값 = %lf\n", i, avg);
	}

	return 0;
}

double get_average(int array[], int size) {
	double avg;
	avg = array[size] / 3;

	return avg;
}
