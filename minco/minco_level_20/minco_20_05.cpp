#include <iostream>
#include <string>

using namespace std;

void abc(int n, string& str) {
	if (n >= str.size()) {
		cout << "\n";
		return;
	}
	cout << str[n];
	abc(n + 1, str);
	cout << str[n];
}

int main() {
	string str;
	cin >> str;
	abc(0, str);

	return 0;
}