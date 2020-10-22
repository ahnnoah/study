#include <stdio.h>

int show_digit(int x);
static int count = 0;

int main() {
	int n;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf("자리수의 개수: %d\n",show_digit(n));

	return 0;
}
int show_digit(int x) {
	if (x / 10 == 0) {
		count++;
		return count;
	}
	else {
		count++;
		return show_digit(x / 10);
	}
}
