#include <stdio.h>
#include <time.h>


int main() {
	int arr[10];
	int min, max;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand();
	}
	for (int i = 0; i < 10; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	max = arr[0];
	for (int i = 1; i < 10; i++) {
		min = (max < arr[i]) ? arr[i] : max;
	}
	min = arr[0];
	for (int i = 1; i < 10; i++) {
		min = (min > arr[i]) ? arr[i] : min;
	}
	printf("최대값은 %d\n최소값은 %d\n", max, min);

	return 0;
}
