#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str1[100] = { 0 };
	char find[100] = { 0 };
	char found[100] = { 0 };
	char* token;
	printf("문자열 입력: ");
	gets_s(str1, 100);
	printf("찾을 문자열: ");
	gets_s(find, 100);
	printf("바꿀 문자열: ");
	gets_s(found, 100);
	token = strtok(str1, " ");
	for (int i = 0; token != NULL; i++) {	// 문장 아니고 단어 하나하나 출력하는 방식
		if (strcmp(find, token) == 0) {		  // 찾을 단어 = 토큰 이면 바꿀 단어 출력
			printf("%s ", found);
		}
		else							                	// 찾을 단어 != 토큰 이면 토큰 출력
			printf("%s ", token);

		token = strtok(NULL, " ");
	}

	return 0;
}
