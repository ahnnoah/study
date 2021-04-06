#include <iostream>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};
Person::Person() {

}
void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	Person person[3];
	string name;
	string tel;
	for (int i = 1; i <= 3; i++) {
		cout << "사람 " << i << ">> ";
		cin >> name >> tel;
		person[i - 1].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++)
		cout << person[i].getName() << " ";
	cout << "\n전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (name.compare(person[i].getName()) == 0) {
			cout << "전화 번호는 " << person[i].getTel() << endl;
		}
	}
}
