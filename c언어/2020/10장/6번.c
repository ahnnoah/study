#include <stdio.h>

int main() {
	int arr[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	for (int i = 0; i < 3; i++) {   //행
		int sum = 0;                  //합
		for (int j = 0; j < 5; j++) { //열
			sum += arr[i][j];
		}
		printf("%d행의 합계: %d\n", i, sum);
	}
	for (int j = 0; j < 5; j++) {   //열
		int sum = 0;
		for (int i = 0; i < 3; i++) { //행
			sum += arr[i][j];
		}
		printf("%d열의 합계: %d\n", j, sum);
	}

	return 0;
}
