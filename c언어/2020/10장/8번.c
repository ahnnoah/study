#include <stdio.h>
#include <math.h>
#define n 10.0

double average(int data[]);         //평균
double variance(int data[], int m); //분산

int main() {
	int data[10];
	double m, v, d;                   //평균, 분산, 표준편차
	for (int i = 0; i < 10; i++) {
		printf("데이터를 입력하시오: ");
		scanf_s("%d", &data[i]);
	}
	m = average(data);
	v = variance(data, m);
	d = sqrt(v);
	printf("평균값은 %lf\n", m);
	printf("표준편차값은 %lf\n", d);

	return 0;
}
double average(int data[]) {
	int m = 0;
	for (int i = 0; i < 10; i++) {
		m += data[i];
	}
	return m / n;
}
double variance(int data[], int m) {
	int v = 0;
	for (int i = 0; i < 10; i++) {
		v += (data[i] - m) * (data[i] - m);
	}
	return v / 10;
}
