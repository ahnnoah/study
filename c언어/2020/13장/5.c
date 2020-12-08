#include <stdio.h>
#include <string.h>
#define SIZE 100

struct point {
	int x, y;
};

int equal(struct point p1, struct point p2);

int main() {
	struct point p1, p2;
	p1.x = 1; p1.y = 2;
	p2.x = 3; p2.y = 5;
	printf("(%d, %d)", p1.x, p1.y);
	if (equal(p1, p2) == 1)
		printf(" == ");
	else
		printf(" != ");
	printf("(%d, %d)", p2.x, p2.y);

	return 0;
}

int equal(struct point p1, struct point p2) {
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;
	else
		return 0;
}
