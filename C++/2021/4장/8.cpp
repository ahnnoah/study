#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int n1, n2;
	cout << "원의 개수 >> ";
	cin >> n1;
	Circle* c = new Circle[n1];
	int count = 0;
	for (int i = 1; i <= n1; i++) {
		cout << "원 " << i << "의 반지름 >> ";
		cin >> n2;
		c[i - 1].setRadius(n2);
		if (c[i - 1].getArea() >= 100)
			count++;
	}
	cout << "\n면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}
