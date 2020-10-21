#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str_chr(char* s, int c);

int main() {
	char str[100] = { 0 };
	printf("문자열을 입력하시오: ");
	gets_s(str, 100);
	for (int i = 97; i < 106; i++) {
		printf("%c: %d\n", i, str_chr(str, i));
	}
	
	return 0;
}
int str_chr(char* s, int c) {
	int count = 0;
	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] == c)
			count++;
	}
	return count;
}
