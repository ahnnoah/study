#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	string str;
	int n;
	char s;
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0)
			break;
		s = (rand() % 24) + 97;
		while (true) {
			n = rand() % str.length();
			if (str[n] != ' ') {
				str[n] = s;
				break;
			}
		}
		cout << str << endl;
	}
}
