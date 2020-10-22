#include <stdio.h>

int is_leap(int year);

int main() {
	int n;
	printf("입력: ");
	scanf_s("%d", &n);
	printf("%d년은 %d일입니다.", n, is_leap(n));
	return 0;
}
int is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 366;
	else
		return 365;
}
