#include <iostream>

using namespace std;

int main() {
	char alpa[8] = { ' ',};
	for (int i = 0; i < 8; ++i)
		cin >> alpa[i];

	int arr[256] = { 0, };
	for (int i = 0; i < 8; ++i) {
		++arr[alpa[i]];
	}

	int max = 0;
	char max_c = ' ';
	for (char ch = 'A'; ch < 'a'; ++ch) {
		if (max < arr[ch]) {
			max = arr[ch];
			max_c = ch;
		}
	}

	cout << max_c << "\n";

	return 0;
}