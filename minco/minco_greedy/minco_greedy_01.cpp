#include <array>
#include <iostream>

using namespace std;

static array<int, 4> changes = { 500, 100, 50, 10};

int count_coin(int money) {
	int cnt = 0;
	int idx = 0;
	while (money > 0 && idx < changes.size()) {
		if (money - changes[idx] >= 0) {
			money -= changes[idx];
			++cnt;
		}
		else {
			++idx;
		}
	}

	return cnt;
}

int main() {
	int money;
	cin >> money;

	cout << count_coin(money) << "\n";

	return 0;
}