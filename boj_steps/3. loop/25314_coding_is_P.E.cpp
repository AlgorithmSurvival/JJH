#include <iostream>
#include <string>

using namespace std;

string to_byte(int count) {
	string byte;

	for (int i = 0; i < (count / 4); ++i) {
		byte += "long ";
	}

	return byte + "int";
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;

	cout << to_byte(count) << "\n";

	return 0;
}