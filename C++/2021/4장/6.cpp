#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	string str;
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0)
			break;
		for (int i = str.length() - 1; i >= 0; i--) {
			cout << str[i];
		}
		cout << endl;
	}
}
