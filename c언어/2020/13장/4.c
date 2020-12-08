#include <stdio.h>
#include <string.h>
#define SIZE 100

struct complex {
	double real;
	double imag;
};

struct complex complex_add(struct complex c1, struct complex c2);

int main() {
	struct complex c1, c2, add;
	c1.real = 1; c1.imag = 2;
	c2.real = 2; c2.imag = 3;
	add = complex_add(c1, c2);
	printf("%lf + %lfi\n", c1.real, c1.imag);
	printf("%lf + %lfi\n", c2.real, c2.imag);
	printf("%lf + %lfi\n", add.real, add.imag);
}

struct complex complex_add(struct complex c1, struct complex c2) {
	struct complex add;
	add.real = c1.real + c2.real;
	add.imag = c1.imag + c2.imag;
	return add;
}
