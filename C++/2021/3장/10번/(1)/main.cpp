#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Add {
	int a;
	int b;
public:
	void setvalue(int x, int y);
	int calculate();
};
void Add::setvalue(int x, int y) {
	a = x, b = y;
}
int Add::calculate() {
	return a + b;
}
class Sub {
	int a;
	int b;
public:
	void setvalue(int x, int y);
	int calculate();
};
void Sub::setvalue(int x, int y) {
	a = x, b = y;
}
int Sub::calculate() {
	return a - b;
}
class Mul {
	int a;
	int b;
public:
	void setvalue(int x, int y);
	int calculate();
};
void Mul::setvalue(int x, int y) {
	a = x, b = y;
}
int Mul::calculate() {
	return a * b;
}
class Div {
	int a;
	int b;
public:
	void setvalue(int x, int y);
	int calculate();
};
void Div::setvalue(int x, int y) {
	a = x, b = y;
}
int Div::calculate() {
	return a / b;
}

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;
	int x, y;
	char c;
	while (1) {
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> c;
		switch (c) {
		case '+':
			a.setvalue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setvalue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setvalue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setvalue(x, y);
			cout << d.calculate() << endl;
			break;
		}
	}
}
