#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string name;
	cin >> name;
	int n;
	cin >> n;

	while (n--) {
		string str;
		cin >> str;
		if (str.find(name) == string::npos)
			cout << 'X' << "\n";
		else
			cout << 'O' << "\n";
	}

	return 0;
}