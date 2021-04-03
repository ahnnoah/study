#include <iostream>
#include <cstdlib>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int a, int b);
};
EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}
int EvenRandom::next() {
	int n;
	while (1) {
		n = rand();
		if (n % 2 == 0)
			return n;
	}
}
int EvenRandom::nextInRange(int a, int b) {
	int n;
	while (1) {
		n = rand() % (b - a + 1) + a;
		if (n % 2 == 0)
			return n;
	}
}
int main() {
	EvenRandom r;
	cout << "--0dptj " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
}
