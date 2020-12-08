#include <stdio.h>
#include <string.h>
#define SIZE 100

void sort_string(char* s[], int size);

int main() {
	char *str[3] = {
		"mycopy",
		"src",
		"dst"
	};
	sort_string(str, 3);

	return 0;
}

void sort_string(char* s[], int size) {
	int least;
	char *temp;
	for (int i = 0; i < size; i++) {
		least = i;
		for (int j = i + 1; j < size; j++)
			if (strcmp(s[least], s[j]) > 0)
				least = j;
		temp = s[least];
		s[least] = s[i];
		s[i] = temp;
	}
	for (int i = 0; i < size; i++) {
		printf("%s\n", s[i]);
	}
}
