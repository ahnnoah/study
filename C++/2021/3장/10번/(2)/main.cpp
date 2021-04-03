#include "all.h"

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
