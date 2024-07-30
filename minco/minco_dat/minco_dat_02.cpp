#include <iostream>

using namespace std;

int main() {
	char vect[10] = "MINCODING";

	int dat[256] = { 0, };

	for (int i = 0; i < 10; ++i) {
		++dat[vect[i]];
	}

	int N;
	cin >> N;
	while (N--) {
		char ch;
		cin >> ch;

		if (dat[ch])
			cout << 'O';
		else
			cout << 'X';
	}

	cout << "\n";

	return 0;
}