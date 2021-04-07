#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};
void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}
double Circle::getArea() {
	double n = (double)radius * (double)radius * 3.14;
	return n;
}
string Circle::getName() {
	return name;
}

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};
CircleManager::CircleManager(int size) {
	this->size = size;
	this->p = new Circle[size];
	string name;
	int radius;
	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}
CircleManager::~CircleManager() {
	delete[] p;
}
void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	int a = 0; //플래그
	for (int i = 0; i < size; i++) {
		if (name.compare(p[i].getName()) == 0) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			a = 1;
			break;
		}
	}
	if (a == 0)
		cout << "이름을 찾을 수 없습니다. 다시 확인해주세요." << endl;
}
void CircleManager::searchByArea() {
	int radius;
	int a = 0;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> radius;
	cout << radius << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > radius) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
			a++;
		}
	}
	if (a == 0)
		cout << radius << "보다 큰 원이 없습니다." << endl;
	else
		cout << endl;
}

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;
	CircleManager circle(n);
	circle.searchByName();
	circle.searchByArea();
}
