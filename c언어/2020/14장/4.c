#include <stdio.h>
#define SIZE 100

void pr_str_array(char** dp);

int main() {
	char *str[5] = {
		"A bad shearer never had a good sickle.",
		"A bad workman (always) blames his tools.",
		"A bad workman quarrels with his tools.",
		"A bad thing never dies.",
		"A bad workman finds fault with his tools."
	};
	pr_str_array(str);

	return 0;
}

void pr_str_array(char** dp) {
	for (int i = 0; i < 5; i++) {
		printf("%s\n", *(dp + i));
	}
}
