#include <stdio.h>
#include <string.h>
#define SIZE 100

struct point {
	int x, y;
};

int quadrant(struct point p);

int main() {
	struct point p;
	scanf_s("%d %d", &p.x, &p.y);
	printf("사분면: %d\n", quadrant(p));

	return 0;
}

int quadrant(struct point p) {
	if (p.x > 0) {
		if (p.y > 0)
			return 1;
		else
			return 4;
	}
	else {
		if (p.y > 0)
			return 2;
		else
			return 3;
	}
}
