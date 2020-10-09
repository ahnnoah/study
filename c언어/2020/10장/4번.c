#include <stdio.h>

int main() {
	int a[10] = { 1,2,3 };
	int b[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		printf("%d  ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	}
	for (int i = 0; i < 10; i++) {
		printf("%d  ", b[i]);
	}

	return 0;
}
