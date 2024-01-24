#include <iostream>
#include <string>

using namespace std;

inline int is_ASCII_code(const char word) {
	int ascii = int(word);
	return ascii;
}

int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	char word;
	cin >> word;

	cout << is_ASCII_code(word) << "\n";

	return 0;
}