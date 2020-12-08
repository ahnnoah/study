#include <stdio.h>
#define SIZE 100

int get_sum(int array[][6], int row, int col);

int main() {
	int arr[3][6] = {
		{10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};
	int sum = get_sum(arr, 3, 6);
	printf("정수의 합: %d", sum);

	return 0;
}

int get_sum(int array[][6], int row, int col) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += array[i][j];
		}
	}
	return sum;
}
