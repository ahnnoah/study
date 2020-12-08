#include <stdio.h>
#define SIZE 100

void set_max_ptr(int m[], int size, int** pmax);

int main() {
	int m[6] = { 5,6,1,3,7,9 };
	int* pmax = &m[0];
	set_max_ptr(m, 6, &pmax);

	return 0;
}

void set_max_ptr(int m[], int size, int** pmax) {
	for (int i = 1; i < size; i++) {
		if (**pmax < m[i])
			**pmax = m[i];
	}
	printf("가장 큰 값은 %d", **pmax);
}
