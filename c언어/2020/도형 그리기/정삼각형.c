#include <stdio.h>

int main() {
	int n;
	printf("도형의 크기 입력: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++)
			printf("  ");
		for (int j = 0; j < 2 * i - 1; j++)
			printf("* ");
		printf("\n");
	}

	return 0;
}
