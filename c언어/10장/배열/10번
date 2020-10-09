#include <stdio.h>
#include <time.h>

int vector_add(double x[], double y[], double z[]);
int vector_dot_prod(double x[], double y[]);

int main() {
	double x[3], y[3], z[3], s;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 3; i++) {    //랜덤 수 지정. 결과 값이 맞게 나왔나 확인하기 위해서 x,y 배열을 출력
		x[i] = rand() % 10;
		y[i] = rand() % 10;
		printf("%lf\t%lf\n", x[i], y[i]);
	}
	vector_add(x, y, z);
	s = vector_dot_prod(x, y);
	printf("벡터의 내적 = %lf", s);

	return 0;
}

int vector_add(double x[], double y[], double z[]) {
	printf("벡터의 합 = [");
	for (int i = 0; i < 3; i++) {
		z[i] = x[i] + y[i];
		printf(" %lf", z[i]);
	}
	printf("]\n");
	return z;
}

int vector_dot_prod(double x[], double y[]) {
	int s = 0;
	for (int i = 0; i < 3; i++) {
		s += x[i] * y[i];
	}
	return s;
}
