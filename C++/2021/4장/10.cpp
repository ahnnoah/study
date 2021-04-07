#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person() { name = " "; }
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};
class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size); 
	void setName(int size, string name);
	void show(); 
	~Family();
};
Family::Family(string name, int size) {
	this->name = name;
	this->size = size;
	p = new Person[size];
}
void Family::setName(int size, string name) {
	p[size].setName(name);
}
void Family::show() {
	cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << "\t";
	cout << endl;
}
Family::~Family() {
	delete [] p;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Sipson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}
