#include <iostream>
#include <string>
#include <array>

using namespace std;

string check_password(string& str) {
	array<string, 5> pws= {{
		"Jason",
		"Dr.tom",
		"EXEXI",
		"GK12P",
		"POW"
	}};

	bool is_pw = false;
	for (auto& p : pws) {
		if (str.compare(p) == 0) {
			is_pw = true;
			break;
		}
	}

	if (is_pw)
		return "암호해제";
	else
		return "암호틀림";
}

int main() {
	string str;
	cin >> str;

	cout << check_password(str) << "\n";

	return 0;
}