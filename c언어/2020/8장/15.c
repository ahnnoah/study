#include <stdio.h>

void is_prime();

int main() {
	is_prime();

	return 0;
}
void is_prime() {
	int count = 0;     //count = 약수의 개수
	for (int i = 1; i < 101; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				count++;
			if (count > 2)
				break;      //소수가 아니기 때문
		}
		if (count == 2) //1+본인
			printf("%d ", i);
		count = 0;
	}
}
