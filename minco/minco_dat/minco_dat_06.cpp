#include <iostream>

using namespace std;

int main() {
	int type;
	cin >> type;

	int N;
	cin >> N;

	int dat[10] = { 0, };
	while (N--) {
		int n;
		cin >> n;
		++dat[n];
	}

	if (type == 1) {
		for (int i = 1; i <= 9; ++i) {
			cout << i << ":" << dat[i] << "개" << "\n";
		}
	}

	else {
		for (int i = 1; i <= 9; ++i) {
			if (dat[i] > 1) {
				cout << "중복발견" << "\n";
				return 0;
			}
		}

		cout << "중복없음" << "\n";
	}

	return 0;
}