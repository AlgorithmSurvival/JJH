#include <iostream>

using namespace std;

int main() {
	char Matrix[3][3] = {
		{ 'C', 'D', 'A' },
		{ 'B', 'M', 'Z' },
		{ 'Q', 'P', 'O' }
	};

	char arr[5] = { '\0', };
	cin >> arr;

	int dat[256] = { 0, };

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j)
			++dat[Matrix[i][j]];
	}
	int cnt = 0;
	for (int i = 0; i < 4; ++i) {
		if (dat[arr[i]])
			cnt += dat[arr[i]];
	}

	cout << cnt << "명" << "\n";
	
	return 0;
}