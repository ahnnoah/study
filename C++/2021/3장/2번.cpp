#include <iostream>
#include <string>
using namespace std;

class Date {
public:
	int year, month, day;
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};
Date::Date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}
Date::Date(string s) {
	year = stoi(s.substr(0,4)); //string.substr(a,b) == string의 a부터 b까지의 문자열 반환
	month = stoi(s.substr(5,7));
	day = stoi(s.substr(8, 10));
}
void Date::show() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
