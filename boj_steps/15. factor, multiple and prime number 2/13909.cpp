#include <iostream>

using namespace std;

int cnt_open_window(const int n) {
	int cnt = 0;

	for (int i = 1; i * i <= n; ++i) {
		++cnt;
	}

	return cnt;
}

int main() {
	int n;
	cin >> n;

	cout << cnt_open_window(n) << "\n";

	return 0;
}