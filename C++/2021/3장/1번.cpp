#include <iostream>
using namespace std;

class Tower {
	int m;
public:
	Tower();
	Tower(int n);
	int getHeight();
};

Tower::Tower() {
	m = 1;
}

Tower::Tower(int n) {
	m = n;
}

int Tower::getHeight() {
	return m;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
}
