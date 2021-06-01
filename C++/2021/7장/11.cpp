#include <iostream>
using namespace std;

class Stack {
	int* p;
	int size;
public:
	Stack() { p = new int[10]; size = 0; }
	~Stack() { delete[] p; }
	Stack& operator<<(int a);
	Stack& operator>>(int &a);
	bool operator!();
};
Stack& Stack::operator<<(int a) {
	p[size] = a;
	size++;
	return *this;
}
Stack& Stack::operator>>(int &a) {
	size--;
	a = p[size];
	return *this;
}
bool Stack::operator!() {
	if (size == 0) return true;
	else return false;
}

int main() {
	Stack stack;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
