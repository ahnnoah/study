#include <stdio.h>
#define VOLUME(r,h) (3.14)*(r)*(r)*(h)

int main() {
	int r, h;
	printf("반지름: ");
	scanf_s("%d", &r);
	printf("높이: ");
	scanf_s("%d", &h);
	printf("부피: %lf", VOLUME(r, h));

	return 0;
}

