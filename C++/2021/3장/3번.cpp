#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Account {
public:
	string name;
	int id;
	int balance;
	Account(string s, int ID, int bal);
	void deposit(int bal);
	string getOwner();
	int inquiry();
	int withdraw(int bal);
};
Account::Account(string s, int ID, int bal) {
	name = s;
	id = ID;
	balance = bal;
}
void Account::deposit(int bal) {
	balance += bal;
}
string Account::getOwner() {
	return name;
}
int Account::inquiry() {
	return balance;
}
int Account::withdraw(int bal) {
	balance -= bal;
	return balance;
}

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
