#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str_chr(char* s, int c);

int main() {
	char str[100] = { 0 };
	int n, count;
	printf("문자열을 입력하시오: ");
	gets_s(str, 100);
	printf("개수를 셀 문자를 입력하시오: ");
	n = getchar();
	printf("%c의 개수: %d", n, str_chr(str, n));
	
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
