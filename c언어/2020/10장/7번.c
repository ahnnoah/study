#include <stdio.h>

int main() {
	int arr[10][3], n, r;

	for (int i = 1; i <= 10; i++) {
		arr[i - 1][0] = i;
		arr[i - 1][1] = i * i;
		arr[i - 1][2] = i * i * i;
	}
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	for (int i = 1; i < 10; i++) {
		if (arr[i][2] == n)
			r = arr[i][0];
	}
	printf("%d의 세제곱근은 %d\n", n, r);

	return 0;
}
