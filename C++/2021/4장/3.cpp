#include <iostream>
#include <string>
using namespace std;

class String {
public:
	int found(string str);
};
int String::found(string str) {
	int count = 0;
	int index = str.find('a');
	if (index > 0)
		count++;
	else
		return count;
	int len = str.length();
	while (index <= len) {
		index = str.find('a', index + 1);
		if (index > 0)
			count++;
		else
			return count;
	}
}

int main() {
	String n;
	cout << "문자열 입력>>";
	string str;
	getline(cin, str);
	cout << "문자 a는 " << n.found(str) << "개 있습니다.";

	return 0;
}
