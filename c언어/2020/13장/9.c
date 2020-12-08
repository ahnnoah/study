#include <stdio.h>
#define SIZE 100

struct food {
	char name[SIZE];
	int calories;
};

int main() {
	struct food food_array[3] = { 0 };
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		printf("음식: ");
		gets_s(food_array[i].name, SIZE);
		printf("칼로리: ");
		scanf_s("%d", &food_array[i].calories);
		getchar();
		sum += food_array[i].calories;
	}
	printf("총 칼로리: %d", sum);

	return 0;
}
