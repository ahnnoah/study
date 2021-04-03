#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Integer {
	int num;
public:
	Integer(int n);
	Integer(string s);
	int get();
	int set(int n);
	int isEven();
};
Integer::Integer(int n) {
	num = n;
}
Integer::Integer(string s) {
	num = stoi(s);
}
int Integer::get() {
	return num;
}
int Integer::set(int n) {
	num = n;
	return num;
}
int Integer::isEven() {
	return 1;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}
