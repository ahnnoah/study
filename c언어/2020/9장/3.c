#include <stdio.h>
#define PW 1234

int check(int pw);
static int count = 0;

int main() {
	int pw;
	while (1) {
		printf("비밀번호: ");
		scanf_s("%d", &pw);
		if (check(pw) == 1) {
			printf("로그인 성공\n");
			break;
		}
		if (count == 3)
			break;
	}

	return 0;
}
int check(int pw) {
	if (pw == PW)
		return 1;
	else {
		count++;
		if (count == 3)
			printf("로그인 시도횟수 초과\n");
		return 0;
	}
}
