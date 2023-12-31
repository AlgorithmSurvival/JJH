#include <iostream>

using namespace std;

bool is_leap_year(int year) {
	return(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int year;

	cin >> year;

	cout << ((is_leap_year(year)) ? 1 : 0) << endl;

	return 0;
}