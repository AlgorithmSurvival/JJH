#include <iostream>

using namespace std;

int main() {
	char arr[15] = { '\0', };
	cin >> arr;

	int dat[256] = { 0 };
	for (int i = 0; i < 15; ++i) {
		if (arr[i] != '\0')
			++dat[arr[i]];
	}

	int cnt = 0;
	for (char i = 'A'; i < 'a'; ++i)
		if (dat[i] != 0)
			++cnt;

	cout << cnt << "개" << "\n";

	return 0;
}