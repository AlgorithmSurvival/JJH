#include <iostream>

using namespace std;

int main() {
	int arr[5][3] = {
		{ 'A', 'B', 'C'},
		{ 'A', 'G', 'H'},
		{ 'H', 'I', 'J'},
		{ 'K', 'A', 'B'},
		{ 'A', 'B', 'C'}
	};

	int dat[256] = { 0, };
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 3; ++j)
			++dat[arr[i][j]];
	}

	for (char ch = 'A'; ch <= 'Z'; ++ch) {
		for (int i = 0; i < dat[ch]; ++i)
			cout << ch;
	}

	return 0;
}