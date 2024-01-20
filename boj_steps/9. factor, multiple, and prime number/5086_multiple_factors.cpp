#include <iostream>
#include <vector>
#include <string>

using namespace std;

string check_num(const int num1, const int num2) {
	if (num2 % num1 == 0) {
		return "factor";
	}
	else if (num1 % num2 == 0) {
		return "multiple";
	}
	else {
		return "neither";
	}

	return 0;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int num1, num2;

	cin >> num1 >> num2;

	do {
		cout << check_num(num1, num2) << "\n";
		cin >> num1 >> num2;
	} while (num1 != 0 && num2 != 0);

	return 0;
}