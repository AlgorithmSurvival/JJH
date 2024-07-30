#include <iostream>

using namespace std;

void colas(int n, int& cnt) {
	if (n == 1)
		return;

	if (n % 2 == 0) {
		++cnt;
		colas(n / 2, cnt);
	}
	else {
		++cnt;
		colas(n * 3 + 1, cnt);
	}
}

int main() {
	int n;
	cin >> n;

	int cnt = 0;
	colas(n, cnt);

	cout << cnt << "\n";

	return 0;
}