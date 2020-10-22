#include <stdio.h>

int show_digit(int x);

int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	show_digit(n);

	return 0;
}
int show_digit(int x) {
	if (x / 10 > 0)
		show_digit(x / 10);
	printf("%d ", x % 10);
}
