#include <iostream>
#include <vector>

using namespace std;

void cnt_sums(int n, int& cnt) {
	if (n == 0) {
		++cnt;
		return;
	}

	if (n < 0) {
		return;
	}

	for (int i = 1; i <= 3; ++i) {
		cnt_sums(n - i, cnt);
	}
}

int main() {
	int n;
	cin >> n;

	int cnt = 0;
	cnt_sums(n, cnt);

	cout << cnt << "\n";

	return 0;
}