#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	cout << str << "\n";
	reverse(str.begin(), str.end());
	cout << str << "\n";

	return 0;
}