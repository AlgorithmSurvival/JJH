#include <iostream>
#include <string>

using namespace std;

void abc(int n) {
	if (n == 1) {
		cout << n << " ";
		return;
	}
	cout << n << " ";
	abc(n - 1);
	cout << n << " ";
}

int main() {
	string str;
	cin >> str;

	abc(str.size());

	return 0;
}