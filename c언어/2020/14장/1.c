#include <stdio.h>
#include <string.h>
#define SIZE 100

void set_proverb(char** q, int n);

int main() {
	int n;
	char* q;
	printf("몇번째 속담을 선택하시겠습니까? ");
	scanf_s("%d", &n);
	set_proverb(&q, n);
	printf("selected proverb = %s\n", q);

	return 0;
}

void set_proverb(char** q, int n) {
	static char* array[10] = {
		"A","B","C","D","E","F","G","H","I","J"
	};
	*q = array[n - 1];
}
