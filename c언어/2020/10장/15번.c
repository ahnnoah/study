#include <stdio.h>
#include <time.h>

int main() {
	char arr[10][10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = '.';
		}
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (rand() % 100 < 30)
				arr[i][j] = '#';
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
