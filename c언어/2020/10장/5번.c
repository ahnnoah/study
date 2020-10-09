#include <stdio.h>
#include <time.h>

int main() {
	int arr[10] = { 0 };
	int max;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++) {
		arr[rand() % 10]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	max = arr[0];
	for (int i = 0; i < 10; i++) {
		max = (max < arr[i]) ? arr[i] : max;
	}
	for (int i = 0; i < 10; i++) {
		if (max == arr[i])
			max = i;
	}
	printf("가장 많이 나온 수 = %d\n", max);

	return 0;
}
