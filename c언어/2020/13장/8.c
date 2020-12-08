#include <stdio.h>
#include <string.h>
#define SIZE 100

struct point {
	int x, y;
};
typedef struct circle {
	struct point center;
	double radius;
}CIRCLE;

double area(struct circle c);
double perimeter(struct circle c);

int main() {
	struct point p;
	CIRCLE circle;
	printf("원의 중심점: ");
	scanf_s("%d %d", &p.x, &p.y);
	printf("원의 반지름: ");
	scanf_s("%lf", &circle.radius);
	printf("원의 면적 = %lf\n원의 둘레 = %lf\n", area(circle), perimeter(circle));

	return 0;
}

double area(struct circle c) {
	return c.radius * c.radius * 3.14;
}

double perimeter(struct circle c) {
	return 2 * c.radius * 3.14;
}
