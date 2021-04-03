#include <iostream>
#include <cstdlib>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class SelectRandom {
public:
	SelectRandom();
	int next();
	int nextInRange(int a, int b);
};
SelectRandom::SelectRandom() {
	srand((unsigned)time(0));
}
int SelectRandom::next() {
	int n;
	while (1) {
		n = rand();
		if (n % 2 == 0)
			return n;
	}
}
int SelectRandom::nextInRange(int a, int b) {
	int n;
	while (1) {
		n = rand() % (b - a + 1) + a;
		if (n % 2 == 1)
			return n;
	}
}
int main() {
	SelectRandom r;
	cout << "--0dptj " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
}
