#include <stdio.h>
#define PW 1234

int sum(int n);

int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf("1부터 %d까지의 합 = %d", n, sum(n));

	return 0;
}
int sum(int n) {
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}
